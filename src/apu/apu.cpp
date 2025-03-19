#include "apu.h"
#include "os/logger.h"
#include <algorithm>
#include <cstring>

namespace BeanRecomp
{
namespace APU
{
    // APUManager static members
    bool APUManager::s_Initialized = false;
    bool APUManager::s_DebugMode = false;
    float APUManager::s_MasterVolume = 1.0f;
    std::vector<std::shared_ptr<AudioStream>> APUManager::s_Streams;
    std::mutex APUManager::s_APUMutex;

    // AudioBuffer implementation
    AudioBuffer::AudioBuffer(const AudioBufferConfig& config)
        : m_Config(config)
        , m_DataSize(0)
        , m_ReadPos(0)
        , m_WritePos(0)
    {
        m_Buffer.resize(config.bufferSize);
    }

    AudioBuffer::~AudioBuffer()
    {
        Shutdown();
    }

    bool AudioBuffer::Initialize()
    {
        if (s_DebugMode)
            Logger::LogDebug("Initializing audio buffer");
        return true;
    }

    void AudioBuffer::Shutdown()
    {
        if (s_DebugMode)
            Logger::LogDebug("Shutting down audio buffer");
        Clear();
    }

    bool AudioBuffer::WriteData(const void* data, size_t size)
    {
        std::lock_guard<std::mutex> lock(m_BufferMutex);
        
        if (m_DataSize + size > m_Config.bufferSize)
            return false;
            
        size_t bytesToWrite = std::min(size, m_Config.bufferSize - m_WritePos);
        std::memcpy(m_Buffer.data() + m_WritePos, data, bytesToWrite);
        
        m_WritePos = (m_WritePos + bytesToWrite) % m_Config.bufferSize;
        m_DataSize += bytesToWrite;
        
        if (bytesToWrite < size)
        {
            size_t remainingBytes = size - bytesToWrite;
            std::memcpy(m_Buffer.data(), static_cast<const uint8_t*>(data) + bytesToWrite, remainingBytes);
            m_WritePos = remainingBytes;
            m_DataSize += remainingBytes;
        }
        
        return true;
    }

    bool AudioBuffer::ReadData(void* data, size_t size)
    {
        std::lock_guard<std::mutex> lock(m_BufferMutex);
        
        if (m_DataSize < size)
            return false;
            
        size_t bytesToRead = std::min(size, m_Config.bufferSize - m_ReadPos);
        std::memcpy(data, m_Buffer.data() + m_ReadPos, bytesToRead);
        
        m_ReadPos = (m_ReadPos + bytesToRead) % m_Config.bufferSize;
        m_DataSize -= bytesToRead;
        
        if (bytesToRead < size)
        {
            size_t remainingBytes = size - bytesToRead;
            std::memcpy(static_cast<uint8_t*>(data) + bytesToRead, m_Buffer.data(), remainingBytes);
            m_ReadPos = remainingBytes;
            m_DataSize -= remainingBytes;
        }
        
        return true;
    }

    void AudioBuffer::Clear()
    {
        std::lock_guard<std::mutex> lock(m_BufferMutex);
        m_DataSize = 0;
        m_ReadPos = 0;
        m_WritePos = 0;
        std::memset(m_Buffer.data(), 0, m_Buffer.size());
    }

    // AudioStream implementation
    AudioStream::AudioStream(const AudioBufferConfig& config)
        : m_Config(config)
        , m_IsPlaying(false)
        , m_IsPaused(false)
        , m_CurrentBuffer(0)
    {
        m_Params.volume = 1.0f;
        m_Params.pitch = 1.0f;
        m_Params.pan = 0.0f;
        m_Params.mute = false;
        m_Params.loop = false;
    }

    AudioStream::~AudioStream()
    {
        Shutdown();
    }

    bool AudioStream::Initialize()
    {
        if (s_DebugMode)
            Logger::LogDebug("Initializing audio stream");
            
        m_Buffers.resize(m_Config.numBuffers);
        for (auto& buffer : m_Buffers)
        {
            buffer = std::make_unique<AudioBuffer>(m_Config);
            if (!buffer->Initialize())
                return false;
        }
        
        return true;
    }

    void AudioStream::Shutdown()
    {
        if (s_DebugMode)
            Logger::LogDebug("Shutting down audio stream");
            
        Stop();
        m_Buffers.clear();
    }

    bool AudioStream::Play()
    {
        std::lock_guard<std::mutex> lock(m_StreamMutex);
        
        if (m_IsPlaying)
            return false;
            
        m_IsPlaying = true;
        m_IsPaused = false;
        
        if (s_DebugMode)
            Logger::LogDebug("Started audio stream playback");
            
        return true;
    }

    void AudioStream::Pause()
    {
        std::lock_guard<std::mutex> lock(m_StreamMutex);
        
        if (!m_IsPlaying)
            return;
            
        m_IsPaused = true;
        
        if (s_DebugMode)
            Logger::LogDebug("Paused audio stream");
    }

    void AudioStream::Stop()
    {
        std::lock_guard<std::mutex> lock(m_StreamMutex);
        
        if (!m_IsPlaying)
            return;
            
        m_IsPlaying = false;
        m_IsPaused = false;
        m_CurrentBuffer = 0;
        
        for (auto& buffer : m_Buffers)
            buffer->Clear();
            
        if (s_DebugMode)
            Logger::LogDebug("Stopped audio stream");
    }

    void AudioStream::SetParams(const AudioParams& params)
    {
        std::lock_guard<std::mutex> lock(m_StreamMutex);
        m_Params = params;
    }

    bool AudioStream::WriteData(const void* data, size_t size)
    {
        std::lock_guard<std::mutex> lock(m_StreamMutex);
        
        if (!m_IsPlaying || m_IsPaused)
            return false;
            
        return m_Buffers[m_CurrentBuffer]->WriteData(data, size);
    }

    void AudioStream::ProcessData()
    {
        std::lock_guard<std::mutex> lock(m_StreamMutex);
        
        if (!m_IsPlaying || m_IsPaused)
            return;
            
        // TODO: Implement audio processing
        // This would typically involve:
        // 1. Reading data from the current buffer
        // 2. Applying audio effects (volume, pitch, pan)
        // 3. Converting audio format if needed
        // 4. Writing processed data to output
        
        if (m_Buffers[m_CurrentBuffer]->IsEmpty())
        {
            m_CurrentBuffer = (m_CurrentBuffer + 1) % m_Buffers.size();
        }
    }

    // APUManager implementation
    bool APUManager::Initialize()
    {
        if (s_Initialized)
            return true;

        std::lock_guard<std::mutex> lock(s_APUMutex);

        Logger::LogInfo("Initializing APU system");
        
        InitializeAPU();
        
        s_Initialized = true;
        return true;
    }

    void APUManager::Shutdown()
    {
        if (!s_Initialized)
            return;

        std::lock_guard<std::mutex> lock(s_APUMutex);

        Logger::LogInfo("Shutting down APU system");
        
        CleanupAPU();
        
        s_Initialized = false;
    }

    std::shared_ptr<AudioStream> APUManager::CreateStream(const AudioBufferConfig& config)
    {
        std::lock_guard<std::mutex> lock(s_APUMutex);
        
        auto stream = std::make_shared<AudioStream>(config);
        if (!stream->Initialize())
        {
            Logger::LogError("Failed to initialize audio stream");
            return nullptr;
        }
        
        s_Streams.push_back(stream);
        
        if (s_DebugMode)
            Logger::LogDebug("Created new audio stream");
            
        return stream;
    }

    void APUManager::DestroyStream(std::shared_ptr<AudioStream> stream)
    {
        std::lock_guard<std::mutex> lock(s_APUMutex);
        
        auto it = std::find(s_Streams.begin(), s_Streams.end(), stream);
        if (it != s_Streams.end())
        {
            s_Streams.erase(it);
            
            if (s_DebugMode)
                Logger::LogDebug("Destroyed audio stream");
        }
    }

    void APUManager::UpdateStreams()
    {
        std::lock_guard<std::mutex> lock(s_APUMutex);
        
        for (auto& stream : s_Streams)
        {
            stream->ProcessData();
        }
    }

    void APUManager::ProcessAudio()
    {
        if (!s_Initialized)
            return;

        std::lock_guard<std::mutex> lock(s_APUMutex);
        
        ProcessStreams();
    }

    void APUManager::MixAudio(float* output, size_t numSamples)
    {
        if (!s_Initialized)
            return;

        std::lock_guard<std::mutex> lock(s_APUMutex);
        
        // TODO: Implement audio mixing
        // This would typically involve:
        // 1. Mixing audio from all active streams
        // 2. Applying master volume
        // 3. Handling channel configuration
        // 4. Writing mixed audio to output buffer
    }

    void APUManager::ApplyEffects(float* buffer, size_t numSamples)
    {
        if (!s_Initialized)
            return;

        std::lock_guard<std::mutex> lock(s_APUMutex);
        
        // TODO: Implement audio effects
        // This would typically involve:
        // 1. Applying equalization
        // 2. Applying reverb
        // 3. Applying other audio effects
    }

    bool APUManager::SetAudioConfig(const AudioBufferConfig& config)
    {
        std::lock_guard<std::mutex> lock(s_APUMutex);
        
        s_AudioConfig = config;
        
        if (s_DebugMode)
            Logger::LogDebug("Updated audio configuration");
            
        return true;
    }

    const AudioBufferConfig& APUManager::GetAudioConfig()
    {
        std::lock_guard<std::mutex> lock(s_APUMutex);
        return s_AudioConfig;
    }

    void APUManager::SetMasterVolume(float volume)
    {
        std::lock_guard<std::mutex> lock(s_APUMutex);
        s_MasterVolume = std::clamp(volume, 0.0f, 1.0f);
    }

    float APUManager::GetMasterVolume()
    {
        std::lock_guard<std::mutex> lock(s_APUMutex);
        return s_MasterVolume;
    }

    void APUManager::SetDebugMode(bool enable)
    {
        std::lock_guard<std::mutex> lock(s_APUMutex);
        s_DebugMode = enable;
        Logger::LogInfo("APU debug mode: %s", enable ? "enabled" : "disabled");
    }

    bool APUManager::IsDebugMode()
    {
        std::lock_guard<std::mutex> lock(s_APUMutex);
        return s_DebugMode;
    }

    void APUManager::DumpAPUState()
    {
        std::lock_guard<std::mutex> lock(s_APUMutex);
        
        Logger::LogInfo("APU System State:");
        Logger::LogInfo("  Initialized: %s", s_Initialized ? "yes" : "no");
        Logger::LogInfo("  Debug Mode: %s", s_DebugMode ? "yes" : "no");
        Logger::LogInfo("  Master Volume: %.2f", s_MasterVolume);
        Logger::LogInfo("  Active Streams: %zu", s_Streams.size());
        
        // Log audio configuration
        Logger::LogInfo("  Audio Configuration:");
        Logger::LogInfo("    Sample Rate: %u", s_AudioConfig.sampleRate);
        Logger::LogInfo("    Buffer Size: %u", s_AudioConfig.bufferSize);
        Logger::LogInfo("    Number of Buffers: %u", s_AudioConfig.numBuffers);
        Logger::LogInfo("    Format: %d", static_cast<int>(s_AudioConfig.format));
        Logger::LogInfo("    Channels: %d", static_cast<int>(s_AudioConfig.channels));
    }

    void APUManager::InitializeAPU()
    {
        // TODO: Implement APU initialization
        // This would typically involve:
        // 1. Setting up audio device
        // 2. Initializing audio processing
        // 3. Setting up audio buffers
    }

    void APUManager::CleanupAPU()
    {
        // TODO: Implement APU cleanup
        // This would typically involve:
        // 1. Stopping all audio streams
        // 2. Cleaning up audio buffers
        // 3. Shutting down audio device
    }

    void APUManager::ProcessStreams()
    {
        for (auto& stream : s_Streams)
        {
            stream->ProcessData();
        }
    }
}
} 
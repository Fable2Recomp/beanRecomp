#pragma once

#include <string>
#include <vector>
#include <memory>
#include <functional>
#include <mutex>
#include "os/logger.h"

namespace BeanRecomp {
namespace APU {

// Audio format definitions
enum class AudioFormat
{
    PCM_8BIT,
    PCM_16BIT,
    PCM_24BIT,
    PCM_32BIT,
    ADPCM
};

// Audio channel configuration
enum class ChannelConfig
{
    MONO,
    STEREO,
    SURROUND_5_1,
    SURROUND_7_1
};

// Audio buffer configuration
struct AudioBufferConfig
{
    uint32_t sampleRate;
    uint32_t bufferSize;
    uint32_t numBuffers;
    AudioFormat format;
    ChannelConfig channels;
};

// Audio processing parameters
struct AudioParams
{
    float volume;
    float pitch;
    float pan;
    bool mute;
    bool loop;
};

// Audio buffer class
class AudioBuffer
{
public:
    AudioBuffer(const AudioBufferConfig& config);
    ~AudioBuffer();

    bool Initialize();
    void Shutdown();

    bool WriteData(const void* data, size_t size);
    bool ReadData(void* data, size_t size);
    void Clear();

    const AudioBufferConfig& GetConfig() const { return m_Config; }
    size_t GetDataSize() const { return m_DataSize; }
    bool IsFull() const { return m_DataSize >= m_Config.bufferSize; }
    bool IsEmpty() const { return m_DataSize == 0; }

private:
    AudioBufferConfig m_Config;
    std::vector<uint8_t> m_Buffer;
    size_t m_DataSize;
    size_t m_ReadPos;
    size_t m_WritePos;
    std::mutex m_BufferMutex;
};

// Audio stream class
class AudioStream
{
public:
    AudioStream(const AudioBufferConfig& config);
    ~AudioStream();

    bool Initialize();
    void Shutdown();

    bool Play();
    void Pause();
    void Stop();
    bool IsPlaying() const { return m_IsPlaying; }
    bool IsPaused() const { return m_IsPaused; }

    void SetParams(const AudioParams& params);
    const AudioParams& GetParams() const { return m_Params; }

    bool WriteData(const void* data, size_t size);
    void ProcessData();

private:
    AudioBufferConfig m_Config;
    std::vector<std::unique_ptr<AudioBuffer>> m_Buffers;
    AudioParams m_Params;
    bool m_IsPlaying;
    bool m_IsPaused;
    size_t m_CurrentBuffer;
    std::mutex m_StreamMutex;
};

// APU Manager class
class APUManager
{
public:
    static bool Initialize();
    static void Shutdown();

    // Stream management
    static std::shared_ptr<AudioStream> CreateStream(const AudioBufferConfig& config);
    static void DestroyStream(std::shared_ptr<AudioStream> stream);
    static void UpdateStreams();

    // Audio processing
    static void ProcessAudio();
    static void MixAudio(float* output, size_t numSamples);
    static void ApplyEffects(float* buffer, size_t numSamples);

    // Configuration
    static bool SetAudioConfig(const AudioBufferConfig& config);
    static const AudioBufferConfig& GetAudioConfig();
    static void SetMasterVolume(float volume);
    static float GetMasterVolume();

    // Debugging
    static void SetDebugMode(bool enable);
    static bool IsDebugMode();
    static void DumpAPUState();

private:
    static bool s_Initialized;
    static bool s_DebugMode;
    static AudioBufferConfig s_AudioConfig;
    static float s_MasterVolume;
    static std::vector<std::shared_ptr<AudioStream>> s_Streams;
    static std::mutex s_APUMutex;

    static void InitializeAPU();
    static void CleanupAPU();
    static void ProcessStreams();
};

class APU {
public:
    APU() = default;
    ~APU() = default;
};

} // namespace APU
} // namespace BeanRecomp 
#include "xact_parser.h"
#include <fstream>
#include <iostream>
#include <cstring>
#include <filesystem>

namespace XenonRecomp {

// XACT file format constants
constexpr uint32_t WAVEBANK_HEADER_SIGNATURE = 0x444E4257; // "WBND"
constexpr uint32_t SOUNDBANK_HEADER_SIGNATURE = 0x444E4253; // "SBND"
constexpr uint32_t SETTINGS_HEADER_SIGNATURE = 0x53474758; // "XGGS"

// Wave bank flags
constexpr uint32_t WAVEBANK_TYPE_BUFFER = 0x00000000;
constexpr uint32_t WAVEBANK_TYPE_STREAMING = 0x00000001;
constexpr uint32_t WAVEBANK_TYPE_MASK = 0x00000001;

// Wave bank entry flags
constexpr uint32_t WAVEBANKENTRY_READAHEAD = 0x00000001;
constexpr uint32_t WAVEBANKENTRY_LOOPCACHE = 0x00000002;
constexpr uint32_t WAVEBANKENTRY_REMOVELOOPTAIL = 0x00000004;
constexpr uint32_t WAVEBANKENTRY_IGNORELOOP = 0x00000008;

bool XACTParser::LoadWaveBank(const std::string& filename) {
    // Clear any existing data
    waves.clear();
    waveNameToIndex.clear();

    // Open the file
    std::ifstream file(filename, std::ios::binary);
    if (!file.is_open()) {
        std::cerr << "Failed to open wave bank file: " << filename << std::endl;
        return false;
    }

    // Get file size
    file.seekg(0, std::ios::end);
    size_t fileSize = file.tellg();
    file.seekg(0, std::ios::beg);

    // Read the entire file into memory
    std::vector<uint8_t> fileData(fileSize);
    file.read(reinterpret_cast<char*>(fileData.data()), fileSize);
    file.close();

    // Parse the header
    if (!ParseWaveBankHeader(fileData.data(), fileSize)) {
        std::cerr << "Failed to parse wave bank header" << std::endl;
        return false;
    }

    return true;
}

bool XACTParser::LoadSoundBank(const std::string& filename) {
    // Clear any existing data
    cues.clear();
    cueNameToIndex.clear();
    sounds.clear();
    tracks.clear();

    // Open the file
    std::ifstream file(filename, std::ios::binary);
    if (!file.is_open()) {
        std::cerr << "Failed to open sound bank file: " << filename << std::endl;
        return false;
    }

    // Get file size
    file.seekg(0, std::ios::end);
    size_t fileSize = file.tellg();
    file.seekg(0, std::ios::beg);

    // Read the entire file into memory
    std::vector<uint8_t> fileData(fileSize);
    file.read(reinterpret_cast<char*>(fileData.data()), fileSize);
    file.close();

    // Parse the header
    if (!ParseSoundBankHeader(fileData.data(), fileSize)) {
        std::cerr << "Failed to parse sound bank header" << std::endl;
        return false;
    }

    return true;
}

bool XACTParser::LoadGlobalSettings(const std::string& filename) {
    // Open the file
    std::ifstream file(filename, std::ios::binary);
    if (!file.is_open()) {
        std::cerr << "Failed to open global settings file: " << filename << std::endl;
        return false;
    }

    // Get file size
    file.seekg(0, std::ios::end);
    size_t fileSize = file.tellg();
    file.seekg(0, std::ios::beg);

    // Read the entire file into memory
    std::vector<uint8_t> fileData(fileSize);
    file.read(reinterpret_cast<char*>(fileData.data()), fileSize);
    file.close();

    // Parse the header
    if (!ParseGlobalSettingsHeader(fileData.data(), fileSize)) {
        std::cerr << "Failed to parse global settings header" << std::endl;
        return false;
    }

    return true;
}

size_t XACTParser::GetWaveCount() const {
    return waves.size();
}

const XACTParser::WaveEntry* XACTParser::GetWave(size_t index) const {
    if (index >= waves.size()) {
        return nullptr;
    }
    return &waves[index];
}

const XACTParser::WaveEntry* XACTParser::GetWaveByName(const std::string& name) const {
    auto it = waveNameToIndex.find(name);
    if (it == waveNameToIndex.end()) {
        return nullptr;
    }
    return &waves[it->second];
}

size_t XACTParser::GetCueCount() const {
    return cues.size();
}

const XACTParser::CueEntry* XACTParser::GetCue(size_t index) const {
    if (index >= cues.size()) {
        return nullptr;
    }
    return &cues[index];
}

const XACTParser::CueEntry* XACTParser::GetCueByName(const std::string& name) const {
    auto it = cueNameToIndex.find(name);
    if (it == cueNameToIndex.end()) {
        return nullptr;
    }
    return &cues[it->second];
}

const XACTParser::SoundEntry* XACTParser::GetSound(size_t index) const {
    if (index >= sounds.size()) {
        return nullptr;
    }
    return &sounds[index];
}

bool XACTParser::ExtractWave(size_t index, const std::string& outputPath) const {
    if (index >= waves.size()) {
        std::cerr << "Invalid wave index: " << index << std::endl;
        return false;
    }

    const auto& wave = waves[index];
    
    // Create output directory if it doesn't exist
    std::filesystem::path path(outputPath);
    std::filesystem::create_directories(path.parent_path());

    // Write the wave data to the output file
    std::ofstream outFile(outputPath, std::ios::binary);
    if (!outFile.is_open()) {
        std::cerr << "Failed to open output file: " << outputPath << std::endl;
        return false;
    }

    // Write WAV header
    if (!WriteWAVHeader(outFile, wave)) {
        std::cerr << "Failed to write WAV header" << std::endl;
        outFile.close();
        return false;
    }

    // Write wave data
    outFile.write(reinterpret_cast<const char*>(wave.data.data()), wave.data.size());
    outFile.close();

    return true;
}

bool XACTParser::ExtractWaveByName(const std::string& name, const std::string& outputPath) const {
    auto it = waveNameToIndex.find(name);
    if (it == waveNameToIndex.end()) {
        std::cerr << "Wave not found: " << name << std::endl;
        return false;
    }

    return ExtractWave(it->second, outputPath);
}

bool XACTParser::ParseWaveBankHeader(const uint8_t* data, size_t size) {
    // This is a simplified implementation based on the XACT wave bank format
    // The actual format may vary, so you'll need to adjust this based on reverse engineering
    
    // Check for minimum size
    if (size < 64) {
        std::cerr << "Wave bank file too small" << std::endl;
        return false;
    }
    
    // Check for signature
    uint32_t signature = *reinterpret_cast<const uint32_t*>(data);
    if (signature != WAVEBANK_HEADER_SIGNATURE) {
        std::cerr << "Invalid wave bank signature" << std::endl;
        return false;
    }
    
    // Read version
    uint32_t version = *reinterpret_cast<const uint32_t*>(data + 4);
    
    // Read segment offsets and sizes
    uint32_t segmentCount = 5; // XACT wave banks typically have 5 segments
    std::vector<uint32_t> segmentOffsets(segmentCount);
    std::vector<uint32_t> segmentSizes(segmentCount);
    
    for (uint32_t i = 0; i < segmentCount; ++i) {
        segmentOffsets[i] = *reinterpret_cast<const uint32_t*>(data + 12 + i * 8);
        segmentSizes[i] = *reinterpret_cast<const uint32_t*>(data + 16 + i * 8);
    }
    
    // Read wave bank flags
    uint32_t flags = *reinterpret_cast<const uint32_t*>(data + 8);
    bool isStreaming = (flags & WAVEBANK_TYPE_MASK) == WAVEBANK_TYPE_STREAMING;
    
    // Read wave count
    uint32_t waveCount = *reinterpret_cast<const uint32_t*>(data + 52);
    
    // Check if the file is large enough to contain all the data
    if (size < segmentOffsets[4] + segmentSizes[4]) {
        std::cerr << "Wave bank file too small for data" << std::endl;
        return false;
    }
    
    // Parse wave metadata
    const uint8_t* metadataPtr = data + segmentOffsets[1];
    const uint8_t* namePtr = data + segmentOffsets[3];
    const uint8_t* dataPtr = data + segmentOffsets[4];
    
    for (uint32_t i = 0; i < waveCount; ++i) {
        WaveEntry wave;
        wave.index = i;
        
        // Read wave metadata
        uint32_t metadataOffset = i * 24; // Each metadata entry is 24 bytes
        wave.offset = *reinterpret_cast<const uint32_t*>(metadataPtr + metadataOffset);
        wave.size = *reinterpret_cast<const uint32_t*>(metadataPtr + metadataOffset + 4);
        
        uint32_t formatData = *reinterpret_cast<const uint32_t*>(metadataPtr + metadataOffset + 8);
        wave.format = formatData & 0xFFFF;
        wave.channels = (formatData >> 16) & 0xFF;
        wave.bitsPerSample = (formatData >> 24) & 0xFF;
        
        wave.sampleRate = *reinterpret_cast<const uint32_t*>(metadataPtr + metadataOffset + 12);
        wave.loopStart = *reinterpret_cast<const uint32_t*>(metadataPtr + metadataOffset + 16);
        wave.loopLength = *reinterpret_cast<const uint32_t*>(metadataPtr + metadataOffset + 20);
        
        // Calculate derived values
        wave.avgBytesPerSec = wave.sampleRate * wave.channels * wave.bitsPerSample / 8;
        wave.blockAlign = wave.channels * wave.bitsPerSample / 8;
        
        // Read wave name if available
        if (segmentSizes[3] > 0) {
            // Names are stored as a table of offsets followed by the string data
            uint32_t nameOffset = *reinterpret_cast<const uint32_t*>(namePtr + i * 4);
            wave.name = reinterpret_cast<const char*>(namePtr + nameOffset);
        } else {
            // If no names are available, use the index as the name
            wave.name = "Wave_" + std::to_string(i);
        }
        
        // Read wave data
        if (isStreaming) {
            // For streaming wave banks, the data is stored externally
            wave.data.clear();
        } else {
            // For in-memory wave banks, copy the data
            wave.data.resize(wave.size);
            std::memcpy(wave.data.data(), dataPtr + wave.offset, wave.size);
        }
        
        // Add wave to the list
        waveNameToIndex[wave.name] = waves.size();
        waves.push_back(std::move(wave));
    }
    
    return true;
}

bool XACTParser::ParseSoundBankHeader(const uint8_t* data, size_t size) {
    // This is a simplified implementation based on the XACT sound bank format
    // The actual format may vary, so you'll need to adjust this based on reverse engineering
    
    // Check for minimum size
    if (size < 64) {
        std::cerr << "Sound bank file too small" << std::endl;
        return false;
    }
    
    // Check for signature
    uint32_t signature = *reinterpret_cast<const uint32_t*>(data);
    if (signature != SOUNDBANK_HEADER_SIGNATURE) {
        std::cerr << "Invalid sound bank signature" << std::endl;
        return false;
    }
    
    // Read version
    uint32_t version = *reinterpret_cast<const uint32_t*>(data + 4);
    
    // Read cue count
    uint32_t cueCount = *reinterpret_cast<const uint32_t*>(data + 12);
    
    // Read sound count
    uint32_t soundCount = *reinterpret_cast<const uint32_t*>(data + 16);
    
    // Read track count
    uint32_t trackCount = *reinterpret_cast<const uint32_t*>(data + 20);
    
    // Read offsets to various sections
    uint32_t cueNameTableOffset = *reinterpret_cast<const uint32_t*>(data + 24);
    uint32_t cueTableOffset = *reinterpret_cast<const uint32_t*>(data + 28);
    uint32_t soundTableOffset = *reinterpret_cast<const uint32_t*>(data + 32);
    uint32_t trackTableOffset = *reinterpret_cast<const uint32_t*>(data + 36);
    
    // Check if the file is large enough to contain all the data
    if (size < cueNameTableOffset || size < cueTableOffset || 
        size < soundTableOffset || size < trackTableOffset) {
        std::cerr << "Sound bank file too small for data" << std::endl;
        return false;
    }
    
    // Parse cues
    for (uint32_t i = 0; i < cueCount; ++i) {
        CueEntry cue;
        cue.index = i;
        
        // Read cue data
        uint32_t cueOffset = cueTableOffset + i * 12; // Each cue entry is 12 bytes
        cue.flags = *reinterpret_cast<const uint32_t*>(data + cueOffset);
        cue.soundIndex = *reinterpret_cast<const uint32_t*>(data + cueOffset + 4);
        
        // Read cue name
        uint32_t nameOffset = *reinterpret_cast<const uint32_t*>(data + cueNameTableOffset + i * 4);
        cue.name = reinterpret_cast<const char*>(data + nameOffset);
        
        // Add cue to the list
        cueNameToIndex[cue.name] = cues.size();
        cues.push_back(std::move(cue));
    }
    
    // Parse sounds
    for (uint32_t i = 0; i < soundCount; ++i) {
        SoundEntry sound;
        sound.index = i;
        
        // Read sound data
        uint32_t soundOffset = soundTableOffset + i * 20; // Each sound entry is 20 bytes
        sound.flags = *reinterpret_cast<const uint32_t*>(data + soundOffset);
        sound.category = *reinterpret_cast<const uint32_t*>(data + soundOffset + 4);
        sound.volume = *reinterpret_cast<const uint32_t*>(data + soundOffset + 8);
        sound.pitch = *reinterpret_cast<const uint32_t*>(data + soundOffset + 12);
        sound.priority = *reinterpret_cast<const uint32_t*>(data + soundOffset + 16);
        
        // Read track indices
        uint32_t trackIndexOffset = *reinterpret_cast<const uint32_t*>(data + soundOffset + 20);
        uint32_t trackCount = *reinterpret_cast<const uint32_t*>(data + trackIndexOffset);
        
        for (uint32_t j = 0; j < trackCount; ++j) {
            uint32_t trackIndex = *reinterpret_cast<const uint32_t*>(data + trackIndexOffset + 4 + j * 4);
            sound.trackIndices.push_back(trackIndex);
        }
        
        // Add sound to the list
        sounds.push_back(std::move(sound));
    }
    
    // Parse tracks
    for (uint32_t i = 0; i < trackCount; ++i) {
        TrackEntry track;
        track.index = i;
        
        // Read track data
        uint32_t trackOffset = trackTableOffset + i * 24; // Each track entry is 24 bytes
        track.waveIndex = *reinterpret_cast<const uint32_t*>(data + trackOffset);
        track.waveBank = *reinterpret_cast<const uint32_t*>(data + trackOffset + 4);
        track.loopCount = *reinterpret_cast<const uint32_t*>(data + trackOffset + 8);
        track.volume = *reinterpret_cast<const uint32_t*>(data + trackOffset + 12);
        track.pitch = *reinterpret_cast<const uint32_t*>(data + trackOffset + 16);
        
        // Add track to the list
        tracks.push_back(std::move(track));
    }
    
    return true;
}

bool XACTParser::ParseGlobalSettingsHeader(const uint8_t* data, size_t size) {
    // This is a simplified implementation based on the XACT global settings format
    // The actual format may vary, so you'll need to adjust this based on reverse engineering
    
    // Check for minimum size
    if (size < 16) {
        std::cerr << "Global settings file too small" << std::endl;
        return false;
    }
    
    // Check for signature
    uint32_t signature = *reinterpret_cast<const uint32_t*>(data);
    if (signature != SETTINGS_HEADER_SIGNATURE) {
        std::cerr << "Invalid global settings signature" << std::endl;
        return false;
    }
    
    // Read version
    uint32_t version = *reinterpret_cast<const uint32_t*>(data + 4);
    
    // For now, we don't need to parse the rest of the global settings
    // as we're primarily interested in the wave and sound banks
    
    return true;
}

bool XACTParser::WriteWAVHeader(std::ofstream& file, const WaveEntry& wave) const {
    // RIFF header
    file.write("RIFF", 4);
    uint32_t fileSize = 36 + wave.size; // 36 bytes for header + data size
    file.write(reinterpret_cast<const char*>(&fileSize), 4);
    file.write("WAVE", 4);
    
    // Format chunk
    file.write("fmt ", 4);
    uint32_t fmtSize = 16; // Size of format chunk
    file.write(reinterpret_cast<const char*>(&fmtSize), 4);
    uint16_t formatTag = static_cast<uint16_t>(wave.format);
    file.write(reinterpret_cast<const char*>(&formatTag), 2);
    file.write(reinterpret_cast<const char*>(&wave.channels), 2);
    file.write(reinterpret_cast<const char*>(&wave.sampleRate), 4);
    file.write(reinterpret_cast<const char*>(&wave.avgBytesPerSec), 4);
    file.write(reinterpret_cast<const char*>(&wave.blockAlign), 2);
    file.write(reinterpret_cast<const char*>(&wave.bitsPerSample), 2);
    
    // Data chunk
    file.write("data", 4);
    file.write(reinterpret_cast<const char*>(&wave.size), 4);
    
    return true;
}

} // namespace XenonRecomp 
#include "rba_parser.h"
#include <fstream>
#include <iostream>
#include <cstring>
#include <filesystem>

namespace XenonRecomp {

bool RBAParser::LoadFile(const std::string& filename) {
    // Clear any existing data
    entries.clear();
    nameToIndex.clear();

    // Open the file
    std::ifstream file(filename, std::ios::binary);
    if (!file.is_open()) {
        std::cerr << "Failed to open RBA file: " << filename << std::endl;
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
    if (!ParseHeader(fileData.data(), fileSize)) {
        std::cerr << "Failed to parse RBA header" << std::endl;
        return false;
    }

    return true;
}

size_t RBAParser::GetEntryCount() const {
    return entries.size();
}

const RBAParser::RBAEntry* RBAParser::GetEntry(size_t index) const {
    if (index >= entries.size()) {
        return nullptr;
    }
    return &entries[index];
}

const RBAParser::RBAEntry* RBAParser::GetEntryByName(const std::string& name) const {
    auto it = nameToIndex.find(name);
    if (it == nameToIndex.end()) {
        return nullptr;
    }
    return &entries[it->second];
}

bool RBAParser::ExtractEntry(size_t index, const std::string& outputPath) const {
    if (index >= entries.size()) {
        std::cerr << "Invalid entry index: " << index << std::endl;
        return false;
    }

    const auto& entry = entries[index];
    
    // Create output directory if it doesn't exist
    std::filesystem::path path(outputPath);
    std::filesystem::create_directories(path.parent_path());

    // Write the entry data to the output file
    std::ofstream outFile(outputPath, std::ios::binary);
    if (!outFile.is_open()) {
        std::cerr << "Failed to open output file: " << outputPath << std::endl;
        return false;
    }

    outFile.write(reinterpret_cast<const char*>(entry.data.data()), entry.data.size());
    outFile.close();

    return true;
}

bool RBAParser::ExtractEntryByName(const std::string& name, const std::string& outputPath) const {
    auto it = nameToIndex.find(name);
    if (it == nameToIndex.end()) {
        std::cerr << "Entry not found: " << name << std::endl;
        return false;
    }

    return ExtractEntry(it->second, outputPath);
}

std::vector<const RBAParser::RBAEntry*> RBAParser::GetAudioEntries() const {
    std::vector<const RBAEntry*> audioEntries;
    
    for (const auto& entry : entries) {
        if (IsAudioEntry(entry)) {
            audioEntries.push_back(&entry);
        }
    }
    
    return audioEntries;
}

bool RBAParser::ParseHeader(const uint8_t* data, size_t size) {
    // This is a placeholder implementation since we don't know the exact format
    // of the RBA files. You'll need to reverse engineer the format and implement
    // the actual parsing logic.
    
    // Check for minimum size
    if (size < 16) {
        std::cerr << "RBA file too small" << std::endl;
        return false;
    }
    
    // Check for magic number (assuming 'RBA\0' as a possible magic number)
    if (data[0] != 'R' || data[1] != 'B' || data[2] != 'A' || data[3] != 0) {
        std::cerr << "Invalid RBA file format" << std::endl;
        return false;
    }
    
    // Read number of entries (assuming it's at offset 4, 4 bytes)
    uint32_t numEntries = *reinterpret_cast<const uint32_t*>(data + 4);
    
    // Read header size (assuming it's at offset 8, 4 bytes)
    uint32_t headerSize = *reinterpret_cast<const uint32_t*>(data + 8);
    
    // Check if the file is large enough to contain the header
    if (size < headerSize) {
        std::cerr << "RBA file too small for header" << std::endl;
        return false;
    }
    
    // Parse entries (assuming entry table starts at offset 16)
    uint32_t entryTableOffset = 16;
    
    for (uint32_t i = 0; i < numEntries; ++i) {
        // Check if we have enough data for the entry
        if (entryTableOffset + 16 > size) {
            std::cerr << "RBA file truncated" << std::endl;
            return false;
        }
        
        // Read entry data (assuming 16 bytes per entry)
        RBAEntry entry;
        entry.offset = *reinterpret_cast<const uint32_t*>(data + entryTableOffset);
        entry.size = *reinterpret_cast<const uint32_t*>(data + entryTableOffset + 4);
        entry.type = *reinterpret_cast<const uint32_t*>(data + entryTableOffset + 8);
        
        // Read name length (assuming it's at offset 12, 4 bytes)
        uint32_t nameLength = *reinterpret_cast<const uint32_t*>(data + entryTableOffset + 12);
        
        // Move to the name
        entryTableOffset += 16;
        
        // Check if we have enough data for the name
        if (entryTableOffset + nameLength > size) {
            std::cerr << "RBA file truncated" << std::endl;
            return false;
        }
        
        // Read name
        entry.name = std::string(reinterpret_cast<const char*>(data + entryTableOffset), nameLength);
        
        // Move past the name
        entryTableOffset += nameLength;
        
        // Check if we have enough data for the entry data
        if (entry.offset + entry.size > size) {
            std::cerr << "RBA file truncated" << std::endl;
            return false;
        }
        
        // Copy entry data
        entry.data.resize(entry.size);
        std::memcpy(entry.data.data(), data + entry.offset, entry.size);
        
        // Add entry to the list
        nameToIndex[entry.name] = entries.size();
        entries.push_back(std::move(entry));
    }
    
    return true;
}

bool RBAParser::IsAudioEntry(const RBAEntry& entry) const {
    // This is a placeholder implementation since we don't know how to identify
    // audio entries in the RBA files. You'll need to determine the criteria
    // for identifying audio entries.
    
    // Check file extension in the name
    std::string name = entry.name;
    std::transform(name.begin(), name.end(), name.begin(), ::tolower);
    
    return name.ends_with(".wav") || 
           name.ends_with(".ogg") || 
           name.ends_with(".mp3") ||
           name.ends_with(".xwb") ||  // XACT Wave Bank
           name.ends_with(".xsb");    // XACT Sound Bank
}

} // namespace XenonRecomp 
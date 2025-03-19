#include "symbols.h"
#include "os/logger.h"
#include <fstream>
#include <sstream>
#include <regex>
#include <algorithm>
#include <cctype>
#include <iomanip>

namespace BeanRecomp
{
namespace PPC
{
    std::unordered_map<uint32_t, Symbol> SymbolTable::s_Symbols;
    std::unordered_map<std::string, uint32_t> SymbolTable::s_NameToAddress;

    bool SymbolTable::LoadSymbols(const std::string& filename)
    {
        std::ifstream file(filename);
        if (!file.is_open())
        {
            BeanRecomp::OS::Logger::LogError("Failed to open symbol file: %s", filename.c_str());
            return false;
        }

        Clear();

        std::string line;
        while (std::getline(file, line))
        {
            Symbol symbol;
            if (ParseMapLine(line, symbol))
            {
                AddSymbol(symbol);
            }
        }

        return true;
    }

    bool SymbolTable::SaveSymbols(const std::string& filename)
    {
        std::ofstream file(filename);
        if (!file.is_open())
        {
            BeanRecomp::OS::Logger::LogError("Failed to create symbol file: %s", filename.c_str());
            return false;
        }

        for (const auto& pair : s_Symbols)
        {
            file << GenerateMapLine(pair.second) << std::endl;
        }

        return true;
    }

    void SymbolTable::AddSymbol(const Symbol& symbol)
    {
        s_Symbols[symbol.address] = symbol;
        s_NameToAddress[symbol.name] = symbol.address;
    }

    void SymbolTable::RemoveSymbol(uint32_t address)
    {
        auto it = s_Symbols.find(address);
        if (it != s_Symbols.end())
        {
            s_NameToAddress.erase(it->second.name);
            s_Symbols.erase(it);
        }
    }

    bool SymbolTable::HasSymbol(uint32_t address) const
    {
        return s_Symbols.find(address) != s_Symbols.end();
    }

    const Symbol* SymbolTable::GetSymbol(uint32_t address) const
    {
        auto it = s_Symbols.find(address);
        return it != s_Symbols.end() ? &it->second : nullptr;
    }

    const Symbol* SymbolTable::GetSymbolByName(const std::string& name) const
    {
        auto it = s_NameToAddress.find(name);
        if (it != s_NameToAddress.end())
        {
            return GetSymbol(it->second);
        }
        return nullptr;
    }

    void SymbolTable::AddReference(uint32_t address, const std::string& reference)
    {
        auto it = s_Symbols.find(address);
        if (it != s_Symbols.end())
        {
            if (std::find(it->second.references.begin(), it->second.references.end(), reference) == it->second.references.end())
            {
                it->second.references.push_back(reference);
            }
        }
    }

    void SymbolTable::RemoveReference(uint32_t address, const std::string& reference)
    {
        auto it = s_Symbols.find(address);
        if (it != s_Symbols.end())
        {
            auto refIt = std::find(it->second.references.begin(), it->second.references.end(), reference);
            if (refIt != it->second.references.end())
            {
                it->second.references.erase(refIt);
            }
        }
    }

    void SymbolTable::Clear()
    {
        s_Symbols.clear();
        s_NameToAddress.clear();
    }

    size_t SymbolTable::GetSymbolCount() const
    {
        return s_Symbols.size();
    }

    bool SymbolTable::ImportMapFile(const std::string& filename)
    {
        std::ifstream file(filename);
        if (!file.is_open())
        {
            BeanRecomp::OS::Logger::LogError("Failed to open map file: %s", filename.c_str());
            return false;
        }

        Clear();

        // Common map file formats for Xbox 360
        std::regex mapLineRegex(R"(^\s*([0-9a-fA-F]+)\s+([0-9a-fA-F]+)\s+([^\s]+)\s+(.+)$)");
        std::string line;
        while (std::getline(file, line))
        {
            std::smatch matches;
            if (std::regex_match(line, matches, mapLineRegex))
            {
                Symbol symbol;
                symbol.address = std::stoul(matches[1].str(), nullptr, 16);
                symbol.size = std::stoul(matches[2].str(), nullptr, 16);
                symbol.name = matches[3].str();
                symbol.type = matches[4].str();
                symbol.isFunction = (symbol.type.find("FUNC") != std::string::npos);
                
                AddSymbol(symbol);
            }
        }

        return true;
    }

    bool SymbolTable::ExportMapFile(const std::string& filename) const
    {
        std::ofstream file(filename);
        if (!file.is_open())
        {
            BeanRecomp::OS::Logger::LogError("Failed to create map file: %s", filename.c_str());
            return false;
        }

        for (const auto& pair : s_Symbols)
        {
            file << GenerateMapLine(pair.second) << std::endl;
        }

        return true;
    }

    bool SymbolTable::ParseMapLine(const std::string& line, Symbol& symbol)
    {
        // Parse common map file format
        std::regex mapLineRegex(R"(^\s*([0-9a-fA-F]+)\s+([0-9a-fA-F]+)\s+([^\s]+)\s+(.+)$)");
        std::smatch matches;
        
        if (std::regex_match(line, matches, mapLineRegex))
        {
            symbol.address = std::stoul(matches[1].str(), nullptr, 16);
            symbol.size = std::stoul(matches[2].str(), nullptr, 16);
            symbol.name = matches[3].str();
            symbol.type = matches[4].str();
            symbol.isFunction = (symbol.type.find("FUNC") != std::string::npos);
            return true;
        }
        
        return false;
    }

    std::string SymbolTable::GenerateMapLine(const Symbol& symbol)
    {
        std::stringstream ss;
        ss << std::hex << std::uppercase << std::setfill('0')
           << std::setw(8) << symbol.address << " "
           << std::setw(8) << symbol.size << " "
           << symbol.name << " "
           << symbol.type;
        return ss.str();
    }
}
} 
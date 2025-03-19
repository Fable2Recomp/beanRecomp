#pragma once

#include <string>
#include <unordered_map>
#include <vector>
#include <cstdint>

namespace BeanRecomp
{
namespace PPC
{
    struct Symbol
    {
        std::string name;
        uint32_t address;
        uint32_t size;
        bool isFunction;
        std::string type;
        std::vector<std::string> references;
    };

    class SymbolTable
    {
    public:
        static bool LoadSymbols(const std::string& filename);
        static bool SaveSymbols(const std::string& filename);
        
        static void AddSymbol(const Symbol& symbol);
        static void RemoveSymbol(uint32_t address);
        static bool HasSymbol(uint32_t address) const;
        static const Symbol* GetSymbol(uint32_t address) const;
        static const Symbol* GetSymbolByName(const std::string& name) const;
        
        static void AddReference(uint32_t address, const std::string& reference);
        static void RemoveReference(uint32_t address, const std::string& reference);
        
        static void Clear();
        static size_t GetSymbolCount() const;
        
        static bool ImportMapFile(const std::string& filename);
        static bool ExportMapFile(const std::string& filename) const;

    private:
        static std::unordered_map<uint32_t, Symbol> s_Symbols;
        static std::unordered_map<std::string, uint32_t> s_NameToAddress;
        
        static bool ParseMapLine(const std::string& line, Symbol& symbol);
        static std::string GenerateMapLine(const Symbol& symbol);
    };
}
} 
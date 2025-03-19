#pragma once

#include <string>
#include <map>
#include <variant>
#include <memory>
#include <filesystem>
#include <mutex>

namespace BeanRecomp
{
namespace OS
{
    class Config
    {
    public:
        using Value = std::variant<std::string, int, float, bool>;
        
        static bool Initialize(const std::string& configPath);
        static void Shutdown();
        
        static bool Load();
        static bool Save();
        
        static bool HasValue(const std::string& key);
        static Value GetValue(const std::string& key, const Value& defaultValue = Value());
        static void SetValue(const std::string& key, const Value& value);
        
        static std::string GetString(const std::string& key, const std::string& defaultValue = "");
        static int GetInt(const std::string& key, int defaultValue = 0);
        static float GetFloat(const std::string& key, float defaultValue = 0.0f);
        static bool GetBool(const std::string& key, bool defaultValue = false);
        
        static void SetString(const std::string& key, const std::string& value);
        static void SetInt(const std::string& key, int value);
        static void SetFloat(const std::string& key, float value);
        static void SetBool(const std::string& key, bool value);

    private:
        static bool s_Initialized;
        static std::string s_ConfigPath;
        static std::map<std::string, Value> s_Values;
        static std::mutex s_Mutex;
        
        static bool ParseConfigFile(const std::string& content);
        static std::string GenerateConfigFile();
    };
}
} 
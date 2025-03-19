#include "config.h"
#include "logger.h"
#include <fstream>
#include <sstream>
#include <regex>

namespace BeanRecomp
{
namespace OS
{
    bool Config::s_Initialized = false;
    std::string Config::s_ConfigPath;
    std::map<std::string, Config::Value> Config::s_Values;
    std::mutex Config::s_Mutex;

    bool Config::Initialize(const std::string& configPath)
    {
        if (s_Initialized)
            return true;

        s_ConfigPath = configPath;
        s_Initialized = true;
        return true;
    }

    void Config::Shutdown()
    {
        if (!s_Initialized)
            return;

        Save();
        s_Values.clear();
        s_Initialized = false;
    }

    bool Config::Load()
    {
        if (!s_Initialized)
            return false;

        std::lock_guard<std::mutex> lock(s_Mutex);

        try
        {
            if (!std::filesystem::exists(s_ConfigPath))
            {
                Logger::LogWarning("Config file does not exist: %s", s_ConfigPath.c_str());
                return false;
            }

            std::ifstream file(s_ConfigPath);
            if (!file.is_open())
            {
                Logger::LogError("Failed to open config file: %s", s_ConfigPath.c_str());
                return false;
            }

            std::stringstream buffer;
            buffer << file.rdbuf();
            std::string content = buffer.str();

            if (!ParseConfigFile(content))
            {
                Logger::LogError("Failed to parse config file: %s", s_ConfigPath.c_str());
                return false;
            }

            Logger::LogInfo("Config file loaded successfully: %s", s_ConfigPath.c_str());
            return true;
        }
        catch (const std::exception& e)
        {
            Logger::LogError("Exception while loading config: %s", e.what());
            return false;
        }
    }

    bool Config::Save()
    {
        if (!s_Initialized)
            return false;

        std::lock_guard<std::mutex> lock(s_Mutex);

        try
        {
            std::ofstream file(s_ConfigPath);
            if (!file.is_open())
            {
                Logger::LogError("Failed to open config file for writing: %s", s_ConfigPath.c_str());
                return false;
            }

            std::string content = GenerateConfigFile();
            file << content;

            Logger::LogInfo("Config file saved successfully: %s", s_ConfigPath.c_str());
            return true;
        }
        catch (const std::exception& e)
        {
            Logger::LogError("Exception while saving config: %s", e.what());
            return false;
        }
    }

    bool Config::HasValue(const std::string& key)
    {
        std::lock_guard<std::mutex> lock(s_Mutex);
        return s_Values.find(key) != s_Values.end();
    }

    Config::Value Config::GetValue(const std::string& key, const Value& defaultValue)
    {
        std::lock_guard<std::mutex> lock(s_Mutex);
        auto it = s_Values.find(key);
        return it != s_Values.end() ? it->second : defaultValue;
    }

    void Config::SetValue(const std::string& key, const Value& value)
    {
        std::lock_guard<std::mutex> lock(s_Mutex);
        s_Values[key] = value;
    }

    std::string Config::GetString(const std::string& key, const std::string& defaultValue)
    {
        auto value = GetValue(key);
        if (std::holds_alternative<std::string>(value))
        {
            return std::get<std::string>(value);
        }
        return defaultValue;
    }

    int Config::GetInt(const std::string& key, int defaultValue)
    {
        auto value = GetValue(key);
        if (std::holds_alternative<int>(value))
        {
            return std::get<int>(value);
        }
        return defaultValue;
    }

    float Config::GetFloat(const std::string& key, float defaultValue)
    {
        auto value = GetValue(key);
        if (std::holds_alternative<float>(value))
        {
            return std::get<float>(value);
        }
        return defaultValue;
    }

    bool Config::GetBool(const std::string& key, bool defaultValue)
    {
        auto value = GetValue(key);
        if (std::holds_alternative<bool>(value))
        {
            return std::get<bool>(value);
        }
        return defaultValue;
    }

    void Config::SetString(const std::string& key, const std::string& value)
    {
        SetValue(key, Value(value));
    }

    void Config::SetInt(const std::string& key, int value)
    {
        SetValue(key, Value(value));
    }

    void Config::SetFloat(const std::string& key, float value)
    {
        SetValue(key, Value(value));
    }

    void Config::SetBool(const std::string& key, bool value)
    {
        SetValue(key, Value(value));
    }

    bool Config::ParseConfigFile(const std::string& content)
    {
        std::regex lineRegex(R"(^([^=]+)=(.+)$)");
        std::smatch matches;
        std::string line;
        std::istringstream stream(content);

        while (std::getline(stream, line))
        {
            // Skip empty lines and comments
            if (line.empty() || line[0] == '#')
                continue;

            // Remove whitespace
            line = std::regex_replace(line, std::regex(R"(^\s+|\s+$)"), "");

            if (std::regex_match(line, matches, lineRegex))
            {
                std::string key = matches[1].str();
                std::string value = matches[2].str();

                // Remove quotes if present
                if (value.front() == '"' && value.back() == '"')
                {
                    value = value.substr(1, value.length() - 2);
                    SetString(key, value);
                }
                else if (value == "true" || value == "false")
                {
                    SetBool(key, value == "true");
                }
                else if (value.find('.') != std::string::npos)
                {
                    SetFloat(key, std::stof(value));
                }
                else
                {
                    SetInt(key, std::stoi(value));
                }
            }
        }

        return true;
    }

    std::string Config::GenerateConfigFile()
    {
        std::stringstream ss;
        
        for (const auto& [key, value] : s_Values)
        {
            ss << key << "=";
            
            if (std::holds_alternative<std::string>(value))
            {
                ss << "\"" << std::get<std::string>(value) << "\"";
            }
            else if (std::holds_alternative<bool>(value))
            {
                ss << (std::get<bool>(value) ? "true" : "false");
            }
            else if (std::holds_alternative<float>(value))
            {
                ss << std::get<float>(value);
            }
            else if (std::holds_alternative<int>(value))
            {
                ss << std::get<int>(value);
            }
            
            ss << "\n";
        }
        
        return ss.str();
    }
}
} 
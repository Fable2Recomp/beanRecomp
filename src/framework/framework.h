#pragma once

// Standard library includes
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <memory>
#include <functional>
#include <algorithm>
#include <chrono>
#include <thread>
#include <mutex>
#include <atomic>
#include <filesystem>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdint>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cassert>

// Core application
#include "app.h"

// OS subsystems
#include "os/logger.h"
#include "os/user.h"
#include "os/process.h"
#include "os/media.h"
#include "os/version.h"
#include "os/registry.h"

// CPU subsystems
#include "cpu/cpu_info.h"
#include "cpu/memory_info.h"

// HID subsystems
#include "hid/input.h"

// UI subsystems
#include "ui/game_window.h"
#include "ui/message_window.h"

// Kernel IO subsystems
#include "kernel/xdm.h"
#include "kernel/io/directory.h"
#include "kernel/io/file.h"
#include "kernel/io/stream.h"

// Platform-specific defines
#ifdef _WIN32
    #define PLATFORM_WINDOWS
#elif defined(__linux__)
    #define PLATFORM_LINUX
#elif defined(__APPLE__)
    #define PLATFORM_MACOS
#else
    #define PLATFORM_UNKNOWN
#endif

// Debug/Release defines
#ifdef _DEBUG
    #define BUILD_DEBUG
#else
    #define BUILD_RELEASE
#endif

// Architecture defines
#if defined(_M_X64) || defined(__x86_64__)
    #define ARCH_X64
#elif defined(_M_IX86) || defined(__i386__)
    #define ARCH_X86
#elif defined(_M_ARM64) || defined(__aarch64__)
    #define ARCH_ARM64
#elif defined(_M_ARM) || defined(__arm__)
    #define ARCH_ARM
#else
    #define ARCH_UNKNOWN
#endif

namespace XenonRecomp
{
    // Common typedefs
    using u8 = uint8_t;
    using u16 = uint16_t;
    using u32 = uint32_t;
    using u64 = uint64_t;
    
    using s8 = int8_t;
    using s16 = int16_t;
    using s32 = int32_t;
    using s64 = int64_t;
    
    using f32 = float;
    using f64 = double;
    
    // Utility functions
    inline std::string FormatString(const char* format, ...)
    {
        va_list args;
        va_start(args, format);
        
        // Calculate the size needed
        va_list argsCopy;
        va_copy(argsCopy, args);
        int size = vsnprintf(nullptr, 0, format, argsCopy);
        va_end(argsCopy);
        
        // Create the string with the right size
        std::string result(size, '\0');
        vsnprintf(&result[0], size + 1, format, args);
        
        va_end(args);
        return result;
    }
} 
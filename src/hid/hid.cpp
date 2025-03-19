#include "hid.h"
#include "os/logger.h"
#include <algorithm>
#include <cstring>

namespace BeanRecomp
{
namespace HID
{
    bool HID::s_Initialized = false;
    bool HID::s_DebugMode = false;
    InputState HID::s_CurrentState = {};
    InputState HID::s_PreviousState = {};
    std::map<uint32_t, DeviceType> HID::s_Devices;
    std::map<EventType, std::vector<std::function<void(const InputEvent&)>>> HID::s_EventHandlers;
    std::mutex HID::s_HIDMutex;

    bool HID::Initialize()
    {
        if (s_Initialized)
            return true;

        std::lock_guard<std::mutex> lock(s_HIDMutex);

        Logger::LogInfo("Initializing HID system");
        
        // Initialize input states
        ClearInputState();
        
        // Initialize devices
        InitializeDevices();
        
        s_Initialized = true;
        return true;
    }

    void HID::Shutdown()
    {
        if (!s_Initialized)
            return;

        std::lock_guard<std::mutex> lock(s_HIDMutex);

        Logger::LogInfo("Shutting down HID system");
        
        // Clear all devices and handlers
        s_Devices.clear();
        s_EventHandlers.clear();
        
        s_Initialized = false;
    }

    bool HID::RegisterDevice(DeviceType type, uint32_t deviceId)
    {
        std::lock_guard<std::mutex> lock(s_HIDMutex);
        
        if (s_Devices.find(deviceId) != s_Devices.end())
        {
            Logger::LogWarning("Device %u already registered", deviceId);
            return false;
        }
        
        s_Devices[deviceId] = type;
        
        if (s_DebugMode)
            Logger::LogDebug("Registered device %u of type %d", deviceId, static_cast<int>(type));
            
        return true;
    }

    bool HID::UnregisterDevice(uint32_t deviceId)
    {
        std::lock_guard<std::mutex> lock(s_HIDMutex);
        
        auto it = s_Devices.find(deviceId);
        if (it == s_Devices.end())
        {
            Logger::LogWarning("Device %u not registered", deviceId);
            return false;
        }
        
        s_Devices.erase(it);
        
        if (s_DebugMode)
            Logger::LogDebug("Unregistered device %u", deviceId);
            
        return true;
    }

    bool HID::IsDeviceConnected(uint32_t deviceId)
    {
        std::lock_guard<std::mutex> lock(s_HIDMutex);
        return s_Devices.find(deviceId) != s_Devices.end();
    }

    void HID::Update()
    {
        std::lock_guard<std::mutex> lock(s_HIDMutex);
        
        // Store previous state
        s_PreviousState = s_CurrentState;
        
        // Update current state
        UpdateInputState();
        
        // Process any pending events
        // TODO: Implement event processing
    }

    void HID::ProcessEvent(const InputEvent& event)
    {
        std::lock_guard<std::mutex> lock(s_HIDMutex);
        
        if (s_DebugMode)
            Logger::LogDebug("Processing event type %d from device %u", 
                static_cast<int>(event.type), event.deviceId);
        
        // Update input state based on event
        switch (event.type)
        {
            case EventType::KeyDown:
                if (event.keyCode < 256)
                    s_CurrentState.keyStates[event.keyCode] = true;
                break;
                
            case EventType::KeyUp:
                if (event.keyCode < 256)
                    s_CurrentState.keyStates[event.keyCode] = false;
                break;
                
            case EventType::MouseMove:
                s_CurrentState.mouseX = event.x;
                s_CurrentState.mouseY = event.y;
                break;
                
            case EventType::MouseButtonDown:
                if (event.keyCode < 8)
                    s_CurrentState.mouseButtons[event.keyCode] = true;
                break;
                
            case EventType::MouseButtonUp:
                if (event.keyCode < 8)
                    s_CurrentState.mouseButtons[event.keyCode] = false;
                break;
                
            case EventType::MouseWheel:
                s_CurrentState.mouseWheel = event.delta;
                break;
                
            case EventType::GamepadButtonDown:
                if (event.keyCode < 16)
                    s_CurrentState.gamepadButtons[event.keyCode] = true;
                break;
                
            case EventType::GamepadButtonUp:
                if (event.keyCode < 16)
                    s_CurrentState.gamepadButtons[event.keyCode] = false;
                break;
                
            case EventType::GamepadAxis:
                if (event.keyCode < 8)
                    s_CurrentState.gamepadAxes[event.keyCode] = event.delta;
                break;
                
            case EventType::TouchDown:
                s_CurrentState.touchActive = true;
                s_CurrentState.touchX = event.x;
                s_CurrentState.touchY = event.y;
                break;
                
            case EventType::TouchUp:
                s_CurrentState.touchActive = false;
                break;
                
            case EventType::TouchMove:
                s_CurrentState.touchX = event.x;
                s_CurrentState.touchY = event.y;
                break;
        }
        
        // Notify event handlers
        auto it = s_EventHandlers.find(event.type);
        if (it != s_EventHandlers.end())
        {
            for (const auto& handler : it->second)
            {
                try
                {
                    handler(event);
                }
                catch (const std::exception& e)
                {
                    Logger::LogError("Event handler failed: %s", e.what());
                }
            }
        }
    }

    bool HID::RegisterEventHandler(EventType type, std::function<void(const InputEvent&)> handler)
    {
        std::lock_guard<std::mutex> lock(s_HIDMutex);
        
        s_EventHandlers[type].push_back(handler);
        
        if (s_DebugMode)
            Logger::LogDebug("Registered handler for event type %d", static_cast<int>(type));
            
        return true;
    }

    bool HID::UnregisterEventHandler(EventType type)
    {
        std::lock_guard<std::mutex> lock(s_HIDMutex);
        
        auto it = s_EventHandlers.find(type);
        if (it == s_EventHandlers.end())
        {
            Logger::LogWarning("No handlers registered for event type %d", static_cast<int>(type));
            return false;
        }
        
        s_EventHandlers.erase(it);
        
        if (s_DebugMode)
            Logger::LogDebug("Unregistered handler for event type %d", static_cast<int>(type));
            
        return true;
    }

    const InputState& HID::GetInputState()
    {
        std::lock_guard<std::mutex> lock(s_HIDMutex);
        return s_CurrentState;
    }

    bool HID::IsKeyPressed(uint32_t keyCode)
    {
        std::lock_guard<std::mutex> lock(s_HIDMutex);
        return keyCode < 256 && s_CurrentState.keyStates[keyCode];
    }

    bool HID::IsMouseButtonPressed(uint32_t button)
    {
        std::lock_guard<std::mutex> lock(s_HIDMutex);
        return button < 8 && s_CurrentState.mouseButtons[button];
    }

    bool HID::IsGamepadButtonPressed(uint32_t button)
    {
        std::lock_guard<std::mutex> lock(s_HIDMutex);
        return button < 16 && s_CurrentState.gamepadButtons[button];
    }

    float HID::GetGamepadAxis(uint32_t axis)
    {
        std::lock_guard<std::mutex> lock(s_HIDMutex);
        return axis < 8 ? s_CurrentState.gamepadAxes[axis] : 0.0f;
    }

    bool HID::IsTouchActive()
    {
        std::lock_guard<std::mutex> lock(s_HIDMutex);
        return s_CurrentState.touchActive;
    }

    void HID::GetMousePosition(float& x, float& y)
    {
        std::lock_guard<std::mutex> lock(s_HIDMutex);
        x = s_CurrentState.mouseX;
        y = s_CurrentState.mouseY;
    }

    void HID::GetMouseDelta(float& dx, float& dy)
    {
        std::lock_guard<std::mutex> lock(s_HIDMutex);
        dx = s_CurrentState.mouseX - s_PreviousState.mouseX;
        dy = s_CurrentState.mouseY - s_PreviousState.mouseY;
    }

    float HID::GetMouseWheel()
    {
        std::lock_guard<std::mutex> lock(s_HIDMutex);
        return s_CurrentState.mouseWheel;
    }

    void HID::GetTouchPosition(float& x, float& y)
    {
        std::lock_guard<std::mutex> lock(s_HIDMutex);
        x = s_CurrentState.touchX;
        y = s_CurrentState.touchY;
    }

    float HID::GetTouchDelta()
    {
        std::lock_guard<std::mutex> lock(s_HIDMutex);
        float dx = s_CurrentState.touchX - s_PreviousState.touchX;
        float dy = s_CurrentState.touchY - s_PreviousState.touchY;
        return std::sqrt(dx * dx + dy * dy);
    }

    std::string HID::GetDeviceName(uint32_t deviceId)
    {
        std::lock_guard<std::mutex> lock(s_HIDMutex);
        
        auto it = s_Devices.find(deviceId);
        if (it == s_Devices.end())
            return "Unknown Device";
            
        switch (it->second)
        {
            case DeviceType::Keyboard: return "Keyboard";
            case DeviceType::Mouse: return "Mouse";
            case DeviceType::Gamepad: return "Gamepad";
            case DeviceType::Touch: return "Touch";
            default: return "Unknown";
        }
    }

    DeviceType HID::GetDeviceType(uint32_t deviceId)
    {
        std::lock_guard<std::mutex> lock(s_HIDMutex);
        
        auto it = s_Devices.find(deviceId);
        return it != s_Devices.end() ? it->second : DeviceType::Unknown;
    }

    uint32_t HID::GetDeviceCount(DeviceType type)
    {
        std::lock_guard<std::mutex> lock(s_HIDMutex);
        
        uint32_t count = 0;
        for (const auto& device : s_Devices)
        {
            if (device.second == type)
                count++;
        }
        
        return count;
    }

    void HID::SetDebugMode(bool enable)
    {
        std::lock_guard<std::mutex> lock(s_HIDMutex);
        s_DebugMode = enable;
        Logger::LogInfo("HID debug mode: %s", enable ? "enabled" : "disabled");
    }

    bool HID::IsDebugMode()
    {
        std::lock_guard<std::mutex> lock(s_HIDMutex);
        return s_DebugMode;
    }

    void HID::DumpDeviceState()
    {
        std::lock_guard<std::mutex> lock(s_HIDMutex);
        
        Logger::LogInfo("HID System State:");
        Logger::LogInfo("  Initialized: %s", s_Initialized ? "yes" : "no");
        Logger::LogInfo("  Debug Mode: %s", s_DebugMode ? "yes" : "no");
        Logger::LogInfo("  Registered Devices: %zu", s_Devices.size());
        Logger::LogInfo("  Event Handlers: %zu", s_EventHandlers.size());
        
        // Log device counts by type
        for (int type = 0; type < static_cast<int>(DeviceType::Unknown); type++)
        {
            uint32_t count = GetDeviceCount(static_cast<DeviceType>(type));
            Logger::LogInfo("  %s Devices: %u", 
                GetDeviceName(type).c_str(), count);
        }
    }

    void HID::InitializeDevices()
    {
        // TODO: Implement device initialization
        // This would typically involve:
        // 1. Scanning for connected devices
        // 2. Registering each device
        // 3. Setting up device-specific configurations
    }

    void HID::UpdateInputState()
    {
        // TODO: Implement input state update
        // This would typically involve:
        // 1. Polling connected devices
        // 2. Updating state based on device input
        // 3. Generating events for state changes
    }

    void HID::ClearInputState()
    {
        std::memset(&s_CurrentState, 0, sizeof(InputState));
        std::memset(&s_PreviousState, 0, sizeof(InputState));
    }
}
} 
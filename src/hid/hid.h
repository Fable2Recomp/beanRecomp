#pragma once

#include <string>
#include <vector>
#include <map>
#include <functional>
#include "os/logger.h"

namespace BeanRecomp {
namespace HID {

// Input device types
enum class DeviceType
{
    Keyboard,
    Mouse,
    Gamepad,
    Touch,
    Unknown
};

// Input event types
enum class EventType
{
    KeyDown,
    KeyUp,
    MouseMove,
    MouseButtonDown,
    MouseButtonUp,
    MouseWheel,
    GamepadButtonDown,
    GamepadButtonUp,
    GamepadAxis,
    TouchDown,
    TouchUp,
    TouchMove
};

// Input event data structure
struct InputEvent
{
    EventType type;
    DeviceType device;
    uint32_t deviceId;
    uint32_t keyCode;
    float x;
    float y;
    float delta;
    uint32_t timestamp;
};

// Input state structure
struct InputState
{
    bool keyStates[256];  // Keyboard keys
    bool mouseButtons[8]; // Mouse buttons
    float mouseX;
    float mouseY;
    float mouseWheel;
    bool gamepadButtons[16]; // Gamepad buttons
    float gamepadAxes[8];    // Gamepad analog axes
    bool touchActive;
    float touchX;
    float touchY;
};

class HID {
public:
    HID() = default;
    ~HID() = default;

    static bool Initialize();
    static void Shutdown();
    
    // Device management
    static bool RegisterDevice(DeviceType type, uint32_t deviceId);
    static bool UnregisterDevice(uint32_t deviceId);
    static bool IsDeviceConnected(uint32_t deviceId);
    
    // Event handling
    static void Update();
    static void ProcessEvent(const InputEvent& event);
    static bool RegisterEventHandler(EventType type, std::function<void(const InputEvent&)> handler);
    static bool UnregisterEventHandler(EventType type);
    
    // Input state
    static const InputState& GetInputState();
    static bool IsKeyPressed(uint32_t keyCode);
    static bool IsMouseButtonPressed(uint32_t button);
    static bool IsGamepadButtonPressed(uint32_t button);
    static float GetGamepadAxis(uint32_t axis);
    static bool IsTouchActive();
    
    // Mouse position and movement
    static void GetMousePosition(float& x, float& y);
    static void GetMouseDelta(float& dx, float& dy);
    static float GetMouseWheel();
    
    // Touch input
    static void GetTouchPosition(float& x, float& y);
    static float GetTouchDelta();
    
    // Device information
    static std::string GetDeviceName(uint32_t deviceId);
    static DeviceType GetDeviceType(uint32_t deviceId);
    static uint32_t GetDeviceCount(DeviceType type);
    
    // Debugging
    static void SetDebugMode(bool enable);
    static bool IsDebugMode();
    static void DumpDeviceState();

private:
    static bool s_Initialized;
    static bool s_DebugMode;
    static InputState s_CurrentState;
    static InputState s_PreviousState;
    static std::map<uint32_t, DeviceType> s_Devices;
    static std::map<EventType, std::vector<std::function<void(const InputEvent&)>>> s_EventHandlers;
    static std::mutex s_HIDMutex;
    
    static void InitializeDevices();
    static void UpdateInputState();
    static void ClearInputState();
};

} // namespace HID
} // namespace BeanRecomp 
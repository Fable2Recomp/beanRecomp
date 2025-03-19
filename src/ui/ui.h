#pragma once

#include <string>
#include <vector>
#include <memory>
#include <functional>
#include "os/logger.h"
#include "hid/hid.h"

namespace BeanRecomp
{
namespace UI
{
    // Window flags
    enum class WindowFlags
    {
        None = 0,
        Fullscreen = 1 << 0,
        Resizable = 1 << 1,
        Minimizable = 1 << 2,
        Maximizable = 1 << 3,
        AlwaysOnTop = 1 << 4,
        Borderless = 1 << 5,
        Transparent = 1 << 6
    };

    // Window event types
    enum class WindowEventType
    {
        Close,
        Resize,
        Move,
        Focus,
        Unfocus,
        Minimize,
        Maximize,
        Restore
    };

    // Window event data
    struct WindowEvent
    {
        WindowEventType type;
        uint32_t windowId;
        int width;
        int height;
        int x;
        int y;
        bool focused;
    };

    // UI element types
    enum class ElementType
    {
        Button,
        Label,
        TextBox,
        CheckBox,
        RadioButton,
        ComboBox,
        Slider,
        ProgressBar,
        Image,
        Panel,
        Container
    };

    // UI element base class
    class UIElement
    {
    public:
        UIElement(ElementType type, const std::string& name);
        virtual ~UIElement() = default;

        virtual void Update() = 0;
        virtual void Render() = 0;
        virtual void HandleEvent(const HID::InputEvent& event) = 0;

        void SetPosition(int x, int y);
        void SetSize(int width, int height);
        void SetVisible(bool visible);
        void SetEnabled(bool enabled);
        void SetStyle(const std::string& style);

        ElementType GetType() const { return m_Type; }
        const std::string& GetName() const { return m_Name; }
        bool IsVisible() const { return m_Visible; }
        bool IsEnabled() const { return m_Enabled; }

    protected:
        ElementType m_Type;
        std::string m_Name;
        int m_X;
        int m_Y;
        int m_Width;
        int m_Height;
        bool m_Visible;
        bool m_Enabled;
        std::string m_Style;
    };

    // Window class
    class Window
    {
    public:
        Window(const std::string& title, int width, int height, WindowFlags flags = WindowFlags::None);
        ~Window();

        bool Initialize();
        void Shutdown();
        void Update();
        void Render();
        void HandleEvent(const HID::InputEvent& event);

        void SetTitle(const std::string& title);
        void SetSize(int width, int height);
        void SetPosition(int x, int y);
        void SetFullscreen(bool fullscreen);
        void SetVisible(bool visible);

        bool IsInitialized() const { return m_Initialized; }
        bool IsVisible() const { return m_Visible; }
        bool IsFocused() const { return m_Focused; }
        const std::string& GetTitle() const { return m_Title; }
        int GetWidth() const { return m_Width; }
        int GetHeight() const { return m_Height; }
        uint32_t GetId() const { return m_Id; }

    private:
        bool m_Initialized;
        bool m_Visible;
        bool m_Focused;
        std::string m_Title;
        int m_Width;
        int m_Height;
        int m_X;
        int m_Y;
        WindowFlags m_Flags;
        uint32_t m_Id;
        std::vector<std::unique_ptr<UIElement>> m_Elements;
    };

    // UI Manager class
    class UIManager
    {
    public:
        static bool Initialize();
        static void Shutdown();
        
        // Window management
        static Window* CreateWindow(const std::string& title, int width, int height, WindowFlags flags = WindowFlags::None);
        static void DestroyWindow(Window* window);
        static Window* GetWindow(uint32_t id);
        static void UpdateWindows();
        static void RenderWindows();
        
        // Event handling
        static void ProcessInputEvent(const HID::InputEvent& event);
        static bool RegisterWindowEventHandler(WindowEventType type, std::function<void(const WindowEvent&)> handler);
        static bool UnregisterWindowEventHandler(WindowEventType type);
        
        // UI element management
        static UIElement* CreateElement(ElementType type, const std::string& name);
        static void DestroyElement(UIElement* element);
        static void AddElementToWindow(Window* window, UIElement* element);
        static void RemoveElementFromWindow(Window* window, UIElement* element);
        
        // Style management
        static bool LoadStyleSheet(const std::string& filename);
        static void SetGlobalStyle(const std::string& style);
        static const std::string& GetGlobalStyle();
        
        // Debugging
        static void SetDebugMode(bool enable);
        static bool IsDebugMode();
        static void DumpUIState();

    private:
        static bool s_Initialized;
        static bool s_DebugMode;
        static std::vector<std::unique_ptr<Window>> s_Windows;
        static std::map<WindowEventType, std::vector<std::function<void(const WindowEvent&)>>> s_WindowEventHandlers;
        static std::string s_GlobalStyle;
        static std::mutex s_UIMutex;
        
        static void InitializeUI();
        static void CleanupUI();
    };
}
} 
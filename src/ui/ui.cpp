#include "ui.h"
#include "os/logger.h"
#include <algorithm>

namespace BeanRecomp
{
namespace UI
{
    // UIElement implementation
    UIElement::UIElement(ElementType type, const std::string& name)
        : m_Type(type)
        , m_Name(name)
        , m_X(0)
        , m_Y(0)
        , m_Width(0)
        , m_Height(0)
        , m_Visible(true)
        , m_Enabled(true)
    {
    }

    void UIElement::SetPosition(int x, int y)
    {
        m_X = x;
        m_Y = y;
    }

    void UIElement::SetSize(int width, int height)
    {
        m_Width = width;
        m_Height = height;
    }

    void UIElement::SetVisible(bool visible)
    {
        m_Visible = visible;
    }

    void UIElement::SetEnabled(bool enabled)
    {
        m_Enabled = enabled;
    }

    void UIElement::SetStyle(const std::string& style)
    {
        m_Style = style;
    }

    // Window implementation
    Window::Window(const std::string& title, int width, int height, WindowFlags flags)
        : m_Initialized(false)
        , m_Visible(true)
        , m_Focused(false)
        , m_Title(title)
        , m_Width(width)
        , m_Height(height)
        , m_X(0)
        , m_Y(0)
        , m_Flags(flags)
        , m_Id(0)
    {
    }

    Window::~Window()
    {
        Shutdown();
    }

    bool Window::Initialize()
    {
        if (m_Initialized)
            return true;

        Logger::LogInfo("Initializing window: %s", m_Title.c_str());
        
        // TODO: Implement window creation
        // This would typically involve:
        // 1. Creating the window using the platform-specific API
        // 2. Setting up window properties based on flags
        // 3. Initializing the rendering context
        
        m_Initialized = true;
        return true;
    }

    void Window::Shutdown()
    {
        if (!m_Initialized)
            return;

        Logger::LogInfo("Shutting down window: %s", m_Title.c_str());
        
        // TODO: Implement window cleanup
        // This would typically involve:
        // 1. Destroying the rendering context
        // 2. Destroying the window using the platform-specific API
        
        m_Initialized = false;
    }

    void Window::Update()
    {
        if (!m_Initialized || !m_Visible)
            return;

        // Update all UI elements
        for (auto& element : m_Elements)
        {
            element->Update();
        }
    }

    void Window::Render()
    {
        if (!m_Initialized || !m_Visible)
            return;

        // TODO: Implement window rendering
        // This would typically involve:
        // 1. Setting up the rendering context
        // 2. Clearing the window
        // 3. Rendering all UI elements
        // 4. Presenting the rendered content
    }

    void Window::HandleEvent(const HID::InputEvent& event)
    {
        if (!m_Initialized || !m_Visible || !m_Enabled)
            return;

        // Forward events to UI elements
        for (auto& element : m_Elements)
        {
            element->HandleEvent(event);
        }
    }

    void Window::SetTitle(const std::string& title)
    {
        m_Title = title;
        // TODO: Update window title using platform-specific API
    }

    void Window::SetSize(int width, int height)
    {
        m_Width = width;
        m_Height = height;
        // TODO: Update window size using platform-specific API
    }

    void Window::SetPosition(int x, int y)
    {
        m_X = x;
        m_Y = y;
        // TODO: Update window position using platform-specific API
    }

    void Window::SetFullscreen(bool fullscreen)
    {
        if (fullscreen)
            m_Flags = static_cast<WindowFlags>(static_cast<int>(m_Flags) | static_cast<int>(WindowFlags::Fullscreen));
        else
            m_Flags = static_cast<WindowFlags>(static_cast<int>(m_Flags) & ~static_cast<int>(WindowFlags::Fullscreen));
        // TODO: Update window fullscreen state using platform-specific API
    }

    void Window::SetVisible(bool visible)
    {
        m_Visible = visible;
        // TODO: Update window visibility using platform-specific API
    }

    // UIManager implementation
    bool UIManager::s_Initialized = false;
    bool UIManager::s_DebugMode = false;
    std::vector<std::unique_ptr<Window>> UIManager::s_Windows;
    std::map<WindowEventType, std::vector<std::function<void(const WindowEvent&)>>> UIManager::s_WindowEventHandlers;
    std::string UIManager::s_GlobalStyle;
    std::mutex UIManager::s_UIMutex;

    bool UIManager::Initialize()
    {
        if (s_Initialized)
            return true;

        std::lock_guard<std::mutex> lock(s_UIMutex);

        Logger::LogInfo("Initializing UI system");
        
        InitializeUI();
        
        s_Initialized = true;
        return true;
    }

    void UIManager::Shutdown()
    {
        if (!s_Initialized)
            return;

        std::lock_guard<std::mutex> lock(s_UIMutex);

        Logger::LogInfo("Shutting down UI system");
        
        CleanupUI();
        
        s_Initialized = false;
    }

    Window* UIManager::CreateWindow(const std::string& title, int width, int height, WindowFlags flags)
    {
        std::lock_guard<std::mutex> lock(s_UIMutex);
        
        auto window = std::make_unique<Window>(title, width, height, flags);
        if (!window->Initialize())
        {
            Logger::LogError("Failed to initialize window: %s", title.c_str());
            return nullptr;
        }
        
        Window* windowPtr = window.get();
        s_Windows.push_back(std::move(window));
        
        if (s_DebugMode)
            Logger::LogDebug("Created window: %s", title.c_str());
            
        return windowPtr;
    }

    void UIManager::DestroyWindow(Window* window)
    {
        std::lock_guard<std::mutex> lock(s_UIMutex);
        
        auto it = std::find_if(s_Windows.begin(), s_Windows.end(),
            [window](const std::unique_ptr<Window>& w) { return w.get() == window; });
            
        if (it != s_Windows.end())
        {
            if (s_DebugMode)
                Logger::LogDebug("Destroying window: %s", window->GetTitle().c_str());
                
            s_Windows.erase(it);
        }
    }

    Window* UIManager::GetWindow(uint32_t id)
    {
        std::lock_guard<std::mutex> lock(s_UIMutex);
        
        auto it = std::find_if(s_Windows.begin(), s_Windows.end(),
            [id](const std::unique_ptr<Window>& w) { return w->GetId() == id; });
            
        return it != s_Windows.end() ? it->get() : nullptr;
    }

    void UIManager::UpdateWindows()
    {
        std::lock_guard<std::mutex> lock(s_UIMutex);
        
        for (auto& window : s_Windows)
        {
            window->Update();
        }
    }

    void UIManager::RenderWindows()
    {
        std::lock_guard<std::mutex> lock(s_UIMutex);
        
        for (auto& window : s_Windows)
        {
            window->Render();
        }
    }

    void UIManager::ProcessInputEvent(const HID::InputEvent& event)
    {
        std::lock_guard<std::mutex> lock(s_UIMutex);
        
        // Forward input events to all windows
        for (auto& window : s_Windows)
        {
            window->HandleEvent(event);
        }
    }

    bool UIManager::RegisterWindowEventHandler(WindowEventType type, std::function<void(const WindowEvent&)> handler)
    {
        std::lock_guard<std::mutex> lock(s_UIMutex);
        
        s_WindowEventHandlers[type].push_back(handler);
        
        if (s_DebugMode)
            Logger::LogDebug("Registered handler for window event type %d", static_cast<int>(type));
            
        return true;
    }

    bool UIManager::UnregisterWindowEventHandler(WindowEventType type)
    {
        std::lock_guard<std::mutex> lock(s_UIMutex);
        
        auto it = s_WindowEventHandlers.find(type);
        if (it == s_WindowEventHandlers.end())
        {
            Logger::LogWarning("No handlers registered for window event type %d", static_cast<int>(type));
            return false;
        }
        
        s_WindowEventHandlers.erase(it);
        
        if (s_DebugMode)
            Logger::LogDebug("Unregistered handler for window event type %d", static_cast<int>(type));
            
        return true;
    }

    UIElement* UIManager::CreateElement(ElementType type, const std::string& name)
    {
        // TODO: Implement element creation based on type
        return nullptr;
    }

    void UIManager::DestroyElement(UIElement* element)
    {
        // TODO: Implement element destruction
    }

    void UIManager::AddElementToWindow(Window* window, UIElement* element)
    {
        // TODO: Implement element addition to window
    }

    void UIManager::RemoveElementFromWindow(Window* window, UIElement* element)
    {
        // TODO: Implement element removal from window
    }

    bool UIManager::LoadStyleSheet(const std::string& filename)
    {
        // TODO: Implement stylesheet loading
        return false;
    }

    void UIManager::SetGlobalStyle(const std::string& style)
    {
        std::lock_guard<std::mutex> lock(s_UIMutex);
        s_GlobalStyle = style;
    }

    const std::string& UIManager::GetGlobalStyle()
    {
        std::lock_guard<std::mutex> lock(s_UIMutex);
        return s_GlobalStyle;
    }

    void UIManager::SetDebugMode(bool enable)
    {
        std::lock_guard<std::mutex> lock(s_UIMutex);
        s_DebugMode = enable;
        Logger::LogInfo("UI debug mode: %s", enable ? "enabled" : "disabled");
    }

    bool UIManager::IsDebugMode()
    {
        std::lock_guard<std::mutex> lock(s_UIMutex);
        return s_DebugMode;
    }

    void UIManager::DumpUIState()
    {
        std::lock_guard<std::mutex> lock(s_UIMutex);
        
        Logger::LogInfo("UI System State:");
        Logger::LogInfo("  Initialized: %s", s_Initialized ? "yes" : "no");
        Logger::LogInfo("  Debug Mode: %s", s_DebugMode ? "yes" : "no");
        Logger::LogInfo("  Windows: %zu", s_Windows.size());
        Logger::LogInfo("  Event Handlers: %zu", s_WindowEventHandlers.size());
        
        // Log window information
        for (const auto& window : s_Windows)
        {
            Logger::LogInfo("  Window: %s", window->GetTitle().c_str());
            Logger::LogInfo("    ID: %u", window->GetId());
            Logger::LogInfo("    Size: %dx%d", window->GetWidth(), window->GetHeight());
            Logger::LogInfo("    Visible: %s", window->IsVisible() ? "yes" : "no");
            Logger::LogInfo("    Focused: %s", window->IsFocused() ? "yes" : "no");
        }
    }

    void UIManager::InitializeUI()
    {
        // TODO: Implement UI initialization
        // This would typically involve:
        // 1. Setting up the rendering system
        // 2. Loading default styles
        // 3. Creating the main window
    }

    void UIManager::CleanupUI()
    {
        // TODO: Implement UI cleanup
        // This would typically involve:
        // 1. Destroying all windows
        // 2. Cleaning up the rendering system
        // 3. Clearing all styles
    }
}
} 
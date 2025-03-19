#pragma once

#include <string>
#include <vector>
#include <memory>
#include <functional>
#include <mutex>
#include "os/logger.h"

namespace BeanRecomp {
namespace GPU {

// Display mode configuration
enum class DisplayMode
{
    WINDOWED,
    FULLSCREEN,
    BORDERLESS
};

// Graphics API selection
enum class GraphicsAPI
{
    OPENGL,
    VULKAN,
    DIRECTX11,
    DIRECTX12
};

// Display configuration
struct DisplayConfig
{
    uint32_t width;
    uint32_t height;
    uint32_t refreshRate;
    DisplayMode mode;
    GraphicsAPI api;
    bool vsync;
    bool antiAliasing;
    uint32_t msaaSamples;
};

// Render target configuration
struct RenderTargetConfig
{
    uint32_t width;
    uint32_t height;
    bool depthBuffer;
    bool stencilBuffer;
    uint32_t colorAttachments;
    bool multisampled;
};

// Shader types
enum class ShaderType
{
    VERTEX,
    FRAGMENT,
    GEOMETRY,
    COMPUTE
};

// Shader class
class Shader
{
public:
    Shader(ShaderType type);
    ~Shader();

    bool Initialize();
    void Shutdown();

    bool Compile(const std::string& source);
    bool Link();
    void Use();

    ShaderType GetType() const { return m_Type; }
    bool IsCompiled() const { return m_IsCompiled; }

private:
    ShaderType m_Type;
    bool m_IsCompiled;
    // Platform-specific shader handle
    void* m_Handle;
};

// Texture class
class Texture
{
public:
    Texture();
    ~Texture();

    bool Initialize();
    void Shutdown();

    bool LoadFromFile(const std::string& filename);
    bool CreateFromData(const void* data, uint32_t width, uint32_t height, uint32_t format);
    void Bind(uint32_t unit = 0);

    uint32_t GetWidth() const { return m_Width; }
    uint32_t GetHeight() const { return m_Height; }
    uint32_t GetFormat() const { return m_Format; }

private:
    uint32_t m_Width;
    uint32_t m_Height;
    uint32_t m_Format;
    // Platform-specific texture handle
    void* m_Handle;
};

// Render target class
class RenderTarget
{
public:
    RenderTarget(const RenderTargetConfig& config);
    ~RenderTarget();

    bool Initialize();
    void Shutdown();

    void Bind();
    void Unbind();
    void Clear();
    void Resize(uint32_t width, uint32_t height);

    const RenderTargetConfig& GetConfig() const { return m_Config; }
    Texture* GetColorAttachment(uint32_t index = 0);
    Texture* GetDepthAttachment();
    Texture* GetStencilAttachment();

private:
    RenderTargetConfig m_Config;
    std::vector<std::unique_ptr<Texture>> m_ColorAttachments;
    std::unique_ptr<Texture> m_DepthAttachment;
    std::unique_ptr<Texture> m_StencilAttachment;
    // Platform-specific framebuffer handle
    void* m_Handle;
};

// GPU Manager class
class GPUManager
{
public:
    static bool Initialize();
    static void Shutdown();

    // Display management
    static bool CreateDisplay(const DisplayConfig& config);
    static void DestroyDisplay();
    static void Present();
    static void ResizeDisplay(uint32_t width, uint32_t height);
    static void SetDisplayMode(DisplayMode mode);

    // Render target management
    static std::shared_ptr<RenderTarget> CreateRenderTarget(const RenderTargetConfig& config);
    static void DestroyRenderTarget(std::shared_ptr<RenderTarget> target);
    static void SetRenderTarget(std::shared_ptr<RenderTarget> target);

    // Shader management
    static std::shared_ptr<Shader> CreateShader(ShaderType type);
    static void DestroyShader(std::shared_ptr<Shader> shader);
    static void UseShader(std::shared_ptr<Shader> shader);

    // Texture management
    static std::shared_ptr<Texture> CreateTexture();
    static void DestroyTexture(std::shared_ptr<Texture> texture);
    static void BindTexture(std::shared_ptr<Texture> texture, uint32_t unit = 0);

    // Rendering
    static void Clear();
    static void SetClearColor(float r, float g, float b, float a);
    static void SetViewport(uint32_t x, uint32_t y, uint32_t width, uint32_t height);
    static void EnableDepthTest(bool enable);
    static void EnableBlending(bool enable);
    static void SetBlendMode(uint32_t srcFactor, uint32_t dstFactor);

    // Configuration
    static bool SetDisplayConfig(const DisplayConfig& config);
    static const DisplayConfig& GetDisplayConfig();
    static void SetVSync(bool enable);
    static bool IsVSyncEnabled();

    // Debugging
    static void SetDebugMode(bool enable);
    static bool IsDebugMode();
    static void DumpGPUState();

private:
    static bool s_Initialized;
    static bool s_DebugMode;
    static DisplayConfig s_DisplayConfig;
    static std::shared_ptr<RenderTarget> s_DefaultRenderTarget;
    static std::shared_ptr<Shader> s_CurrentShader;
    static std::vector<std::shared_ptr<RenderTarget>> s_RenderTargets;
    static std::vector<std::shared_ptr<Shader>> s_Shaders;
    static std::vector<std::shared_ptr<Texture>> s_Textures;
    static std::mutex s_GPUMutex;

    static void InitializeGPU();
    static void CleanupGPU();
    static void InitializeDefaultRenderTarget();
    static void CleanupDefaultRenderTarget();
};

} // namespace GPU
} // namespace BeanRecomp 
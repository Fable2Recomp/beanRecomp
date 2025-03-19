#include "ppc/ppc.h"
#include "os/logger.h"
#include "os/crash_handler.h"
#include <iostream>
#include <iomanip>
#include <sstream>

int main(int argc, char* argv[])
{
    // Initialize logger
    if (!BeanRecomp::OS::Logger::Initialize())
    {
        std::cerr << "Failed to initialize logger" << std::endl;
        return 1;
    }

    // Initialize crash handler
    if (!BeanRecomp::OS::CrashHandler::Initialize())
    {
        BeanRecomp::OS::Logger::LogError("Failed to initialize crash handler");
        return 1;
    }

    // Initialize PPC system
    if (!BeanRecomp::PPC::PPCManager::Initialize())
    {
        BeanRecomp::OS::Logger::LogError("Failed to initialize PPC system");
        return 1;
    }

    // Configure PPC system
    BeanRecomp::PPC::CPUConfig config;
    config.coreCount = 1;
    config.clockSpeed = 750000000;  // 750MHz
    config.enableJIT = true;
    config.enableMMU = true;
    config.enableFPU = true;
    config.enableAltivec = true;
    config.enableDebug = true;

    if (!BeanRecomp::PPC::PPCManager::SetCPUConfig(config))
    {
        BeanRecomp::OS::Logger::LogError("Failed to configure PPC system");
        return 1;
    }

    // Create a CPU core
    auto core = BeanRecomp::PPC::PPCManager::CreateCore();
    if (!core)
    {
        BeanRecomp::OS::Logger::LogError("Failed to create CPU core");
        return 1;
    }

    // Enable debug mode
    BeanRecomp::PPC::PPCManager::SetDebugMode(true);

    // Main loop
    bool running = true;
    while (running)
    {
        // Update PPC system
        BeanRecomp::PPC::PPCManager::UpdateCores();

        // Check for exit condition
        if (core->GetState() == BeanRecomp::PPC::CPUState::HALTED)
        {
            running = false;
        }
    }

    // Cleanup
    BeanRecomp::PPC::PPCManager::Shutdown();
    BeanRecomp::OS::CrashHandler::Shutdown();
    BeanRecomp::OS::Logger::Shutdown();

    return 0;
}

#include "syscall_translator.h"
#include "os/logger.h"
#include <sstream>

namespace BeanRecomp
{
namespace PPC
{
    bool SyscallTranslator::s_DebugMode = false;
    std::unordered_map<uint32_t, SyscallInfo> SyscallTranslator::s_Syscalls;

    bool SyscallTranslator::Initialize()
    {
        InitializeSyscallTable();
        return true;
    }

    void SyscallTranslator::Shutdown()
    {
        s_Syscalls.clear();
    }

    void SyscallTranslator::InitializeSyscallTable()
    {
        InitializeKernelSyscalls();
        InitializeFileSyscalls();
        InitializeNetworkSyscalls();
        InitializeGraphicsSyscalls();
        InitializeAudioSyscalls();
        InitializeInputSyscalls();
    }

    void SyscallTranslator::InitializeKernelSyscalls()
    {
        // Memory management
        SyscallInfo info;
        info.name = "NtAllocateVirtualMemory";
        info.description = "Allocates virtual memory in the process's address space";
        info.parameters = {"ProcessHandle", "BaseAddress", "RegionSize", "AllocationType", "Protect"};
        info.returnType = "NTSTATUS";
        info.isImplemented = true;
        s_Syscalls[0x0001] = info;

        info.name = "NtFreeVirtualMemory";
        info.description = "Frees virtual memory in the process's address space";
        info.parameters = {"ProcessHandle", "BaseAddress", "RegionSize", "FreeType"};
        info.returnType = "NTSTATUS";
        info.isImplemented = true;
        s_Syscalls[0x0002] = info;

        // Process management
        info.name = "NtCreateThread";
        info.description = "Creates a new thread in the current process";
        info.parameters = {"ThreadHandle", "DesiredAccess", "ObjectAttributes", "ProcessHandle", "ClientId", "ThreadContext", "StartRoutine", "StartContext"};
        info.returnType = "NTSTATUS";
        info.isImplemented = true;
        s_Syscalls[0x0003] = info;

        // Add more kernel syscalls...
    }

    void SyscallTranslator::InitializeFileSyscalls()
    {
        SyscallInfo info;
        info.name = "NtCreateFile";
        info.description = "Creates or opens a file";
        info.parameters = {"FileHandle", "DesiredAccess", "ObjectAttributes", "IoStatusBlock", "AllocationSize", "FileAttributes", "ShareAccess", "CreateDisposition", "CreateOptions", "EaBuffer", "EaLength"};
        info.returnType = "NTSTATUS";
        info.isImplemented = true;
        s_Syscalls[0x0100] = info;

        info.name = "NtReadFile";
        info.description = "Reads data from a file";
        info.parameters = {"FileHandle", "Event", "ApcRoutine", "ApcContext", "IoStatusBlock", "Buffer", "Length", "ByteOffset", "Key"};
        info.returnType = "NTSTATUS";
        info.isImplemented = true;
        s_Syscalls[0x0101] = info;

        // Add more file syscalls...
    }

    void SyscallTranslator::InitializeNetworkSyscalls()
    {
        SyscallInfo info;
        info.name = "NtCreateSocket";
        info.description = "Creates a new socket";
        info.parameters = {"SocketHandle", "AddressFamily", "SocketType", "Protocol"};
        info.returnType = "NTSTATUS";
        info.isImplemented = true;
        s_Syscalls[0x0200] = info;

        // Add more network syscalls...
    }

    void SyscallTranslator::InitializeGraphicsSyscalls()
    {
        SyscallInfo info;
        info.name = "NtGpuCreateContext";
        info.description = "Creates a new GPU context";
        info.parameters = {"ContextHandle", "Flags"};
        info.returnType = "NTSTATUS";
        info.isImplemented = true;
        s_Syscalls[0x0300] = info;

        // Add more graphics syscalls...
    }

    void SyscallTranslator::InitializeAudioSyscalls()
    {
        SyscallInfo info;
        info.name = "NtAudioCreateStream";
        info.description = "Creates a new audio stream";
        info.parameters = {"StreamHandle", "Format", "BufferSize", "Flags"};
        info.returnType = "NTSTATUS";
        info.isImplemented = true;
        s_Syscalls[0x0400] = info;

        // Add more audio syscalls...
    }

    void SyscallTranslator::InitializeInputSyscalls()
    {
        SyscallInfo info;
        info.name = "NtInputGetState";
        info.description = "Gets the current state of input devices";
        info.parameters = {"DeviceType", "StateBuffer", "BufferSize"};
        info.returnType = "NTSTATUS";
        info.isImplemented = true;
        s_Syscalls[0x0500] = info;

        // Add more input syscalls...
    }

    bool SyscallTranslator::TranslateSyscall(uint32_t syscallNumber,
                                           const std::vector<uint32_t>& parameters,
                                           TranslatedInstruction& result)
    {
        auto it = s_Syscalls.find(syscallNumber);
        if (it == s_Syscalls.end())
        {
            BeanRecomp::OS::Logger::LogError("Unknown syscall number: 0x%08X", syscallNumber);
            return false;
        }

        const SyscallInfo& info = it->second;
        if (!info.isImplemented)
        {
            BeanRecomp::OS::Logger::LogError("Syscall not implemented: %s", info.name.c_str());
            return false;
        }

        return GenerateSyscallWrapper(info, parameters, result);
    }

    bool SyscallTranslator::IsSyscallImplemented(uint32_t syscallNumber) const
    {
        auto it = s_Syscalls.find(syscallNumber);
        return it != s_Syscalls.end() && it->second.isImplemented;
    }

    const SyscallInfo* SyscallTranslator::GetSyscallInfo(uint32_t syscallNumber) const
    {
        auto it = s_Syscalls.find(syscallNumber);
        return it != s_Syscalls.end() ? &it->second : nullptr;
    }

    bool SyscallTranslator::GenerateSyscallWrapper(const SyscallInfo& info,
                                                 const std::vector<uint32_t>& parameters,
                                                 TranslatedInstruction& result)
    {
        std::stringstream ss;
        
        // Generate function signature
        ss << info.name << "(";
        
        // Add parameters
        for (size_t i = 0; i < parameters.size(); i++)
        {
            if (i > 0)
                ss << ", ";
            ss << GetParameterType(info.parameters[i]) << " param" << i;
        }
        
        ss << ")";
        
        // Generate function body
        ss << "\n{\n";
        ss << "    // Convert PPC parameters to x86\n";
        
        // Add parameter conversion code
        for (size_t i = 0; i < parameters.size(); i++)
        {
            ss << "    " << GetParameterType(info.parameters[i]) << " x86_param" << i 
               << " = ConvertPPCToX86(ppc_param" << i << ");\n";
        }
        
        // Add syscall invocation
        ss << "    return " << info.name << "_impl(";
        for (size_t i = 0; i < parameters.size(); i++)
        {
            if (i > 0)
                ss << ", ";
            ss << "x86_param" << i;
        }
        ss << ");\n";
        
        ss << "}\n";
        
        result.comment = ss.str();
        return true;
    }

    std::string SyscallTranslator::GetParameterType(const std::string& param)
    {
        // Map PPC parameter types to x86 types
        if (param == "ProcessHandle" || param == "ThreadHandle" || param == "FileHandle")
            return "HANDLE";
        if (param == "BaseAddress" || param == "Buffer")
            return "PVOID";
        if (param == "RegionSize" || param == "Length")
            return "SIZE_T";
        if (param == "DesiredAccess")
            return "ACCESS_MASK";
        if (param == "ObjectAttributes")
            return "POBJECT_ATTRIBUTES";
        if (param == "IoStatusBlock")
            return "PIO_STATUS_BLOCK";
        if (param == "AllocationSize")
            return "PLARGE_INTEGER";
        if (param == "FileAttributes")
            return "ULONG";
        if (param == "ShareAccess")
            return "ULONG";
        if (param == "CreateDisposition")
            return "ULONG";
        if (param == "CreateOptions")
            return "ULONG";
        if (param == "EaBuffer")
            return "PVOID";
        if (param == "EaLength")
            return "ULONG";
        if (param == "Event")
            return "HANDLE";
        if (param == "ApcRoutine")
            return "PIO_APC_ROUTINE";
        if (param == "ApcContext")
            return "PVOID";
        if (param == "ByteOffset")
            return "PLARGE_INTEGER";
        if (param == "Key")
            return "ULONG";
        if (param == "SocketHandle")
            return "HANDLE";
        if (param == "AddressFamily")
            return "USHORT";
        if (param == "SocketType")
            return "USHORT";
        if (param == "Protocol")
            return "USHORT";
        if (param == "ContextHandle")
            return "HANDLE";
        if (param == "Flags")
            return "ULONG";
        if (param == "StreamHandle")
            return "HANDLE";
        if (param == "Format")
            return "ULONG";
        if (param == "BufferSize")
            return "ULONG";
        if (param == "DeviceType")
            return "ULONG";
        if (param == "StateBuffer")
            return "PVOID";
        
        return "ULONG"; // Default type
    }

    std::string SyscallTranslator::GetReturnType(const std::string& type)
    {
        if (type == "NTSTATUS")
            return "NTSTATUS";
        if (type == "HANDLE")
            return "HANDLE";
        if (type == "PVOID")
            return "PVOID";
        if (type == "SIZE_T")
            return "SIZE_T";
        if (type == "ULONG")
            return "ULONG";
        if (type == "USHORT")
            return "USHORT";
        
        return "NTSTATUS"; // Default return type
    }
}
} 
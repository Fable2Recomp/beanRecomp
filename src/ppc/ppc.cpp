#include "ppc.h"
#include "os/logger.h"
#include <algorithm>
#include <cstring>

namespace BeanRecomp
{
namespace PPC
{
    // PPCManager static members
    bool PPCManager::s_Initialized = false;
    bool PPCManager::s_DebugMode = false;
    CPUConfig PPCManager::s_CPUConfig;
    std::vector<std::shared_ptr<CPUCore>> PPCManager::s_Cores;
    std::vector<uint8_t> PPCManager::s_Memory;
    std::vector<uint32_t> PPCManager::s_PendingInterrupts;
    std::mutex PPCManager::s_PPCMutex;
    std::unordered_map<uint32_t, PageTableEntry> PPCManager::s_PageTable;

    // CPUCore implementation
    CPUCore::CPUCore()
    {
        // Initialize registers to 0
        std::fill(std::begin(gpr), std::end(gpr), 0);
        std::fill(std::begin(fpr), std::end(fpr), 0.0);
        std::fill(std::begin(vr), std::end(vr), 0);
        std::fill(std::begin(cr), std::end(cr), 0);
        
        pc = 0;
        lr = 0;
        ctr = 0;
        xer = 0;
        fpscr = 0;
        vscr = 0;
        msr = 0;
        
        // Initialize memory and page table
        memory.clear();
        pageTable.clear();
        
        Logger::Info("CPU Core initialized");
    }

    CPUCore::~CPUCore()
    {
        Shutdown();
    }

    bool CPUCore::Initialize()
    {
        if (PPCManager::IsDebugMode())
            BeanRecomp::OS::Logger::LogDebug("Initializing CPU core");
            
        Reset();
        return true;
    }

    void CPUCore::Shutdown()
    {
        if (PPCManager::IsDebugMode())
            BeanRecomp::OS::Logger::LogDebug("Shutting down CPU core");
            
        m_State = CPUState::STOPPED;
        m_Breakpoints.clear();
    }

    void CPUCore::Update()
    {
        std::lock_guard<std::mutex> lock(m_CoreMutex);
        
        if (m_State != CPUState::RUNNING)
            return;
            
        Execute();
    }

    bool CPUCore::Execute()
    {
        if (m_State != CPUState::RUNNING)
            return false;
            
        // Check for breakpoints
        if (std::find(m_Breakpoints.begin(), m_Breakpoints.end(), m_PC) != m_Breakpoints.end())
        {
            m_State = CPUState::BREAKPOINT;
            return false;
        }
        
        HandleInstruction();
        return true;
    }

    void CPUCore::Reset()
    {
        // Reset all registers to 0
        std::fill(std::begin(gpr), std::end(gpr), 0);
        std::fill(std::begin(fpr), std::end(fpr), 0.0);
        std::fill(std::begin(vr), std::end(vr), 0);
        std::fill(std::begin(cr), std::end(cr), 0);
        
        pc = 0;
        lr = 0;
        ctr = 0;
        xer = 0;
        fpscr = 0;
        vscr = 0;
        msr = 0;
        
        // Clear memory and page table
        memory.clear();
        pageTable.clear();
        
        Logger::Info("CPU Core reset");
    }

    void CPUCore::Pause()
    {
        std::lock_guard<std::mutex> lock(m_CoreMutex);
        
        if (m_State == CPUState::RUNNING)
        {
            m_State = CPUState::PAUSED;
            
            if (PPCManager::IsDebugMode())
                BeanRecomp::OS::Logger::LogDebug("Paused CPU core");
        }
    }

    void CPUCore::Resume()
    {
        std::lock_guard<std::mutex> lock(m_CoreMutex);
        
        if (m_State == CPUState::PAUSED)
        {
            m_State = CPUState::RUNNING;
            
            if (PPCManager::IsDebugMode())
                BeanRecomp::OS::Logger::LogDebug("Resumed CPU core");
        }
    }

    void CPUCore::Halt()
    {
        std::lock_guard<std::mutex> lock(m_CoreMutex);
        
        if (m_State != CPUState::HALTED)
        {
            m_State = CPUState::HALTED;
            
            if (PPCManager::IsDebugMode())
                BeanRecomp::OS::Logger::LogDebug("Halted CPU core");
        }
    }

    void CPUCore::SetBreakpoint(uint32_t address)
    {
        std::lock_guard<std::mutex> lock(m_CoreMutex);
        
        if (std::find(m_Breakpoints.begin(), m_Breakpoints.end(), address) == m_Breakpoints.end())
        {
            m_Breakpoints.push_back(address);
            
            if (PPCManager::IsDebugMode())
                BeanRecomp::OS::Logger::LogDebug("Set breakpoint at 0x%08X", address);
        }
    }

    void CPUCore::RemoveBreakpoint(uint32_t address)
    {
        std::lock_guard<std::mutex> lock(m_CoreMutex);
        
        auto it = std::find(m_Breakpoints.begin(), m_Breakpoints.end(), address);
        if (it != m_Breakpoints.end())
        {
            m_Breakpoints.erase(it);
            
            if (PPCManager::IsDebugMode())
                BeanRecomp::OS::Logger::LogDebug("Removed breakpoint at 0x%08X", address);
        }
    }

    bool CPUCore::HasBreakpoint(uint32_t address) const
    {
        std::lock_guard<std::mutex> lock(m_CoreMutex);
        return std::find(m_Breakpoints.begin(), m_Breakpoints.end(), address) != m_Breakpoints.end();
    }

    void CPUCore::HandleInstruction()
    {
        // Fetch instruction at current PC
        uint32_t instruction;
        if (!PPCManager::ReadMemory(m_PC, &instruction, sizeof(instruction)))
        {
            HandleException(0x300); // Instruction fetch error
            return;
        }

        // Decode instruction
        PPCInstruction decoded;
        if (!DecodeInstruction(instruction, decoded))
        {
            HandleException(0x700); // Illegal instruction
            return;
        }

        // Execute instruction
        if (!ExecuteInstruction(decoded))
        {
            HandleException(0x800); // Program error
            return;
        }

        // Update PC
        m_PC += 4;
    }

    bool CPUCore::DecodeInstruction(uint32_t instruction, PPCInstruction& decoded)
    {
        // Extract opcode (bits 0-5)
        decoded.opcode = (instruction >> 26) & 0x3F;

        // Extract rD (bits 6-10)
        decoded.rD = (instruction >> 21) & 0x1F;

        // Extract rA (bits 11-15)
        decoded.rA = (instruction >> 16) & 0x1F;

        // Extract rB (bits 16-20)
        decoded.rB = (instruction >> 11) & 0x1F;

        // Extract rC (bits 21-25)
        decoded.rC = (instruction >> 6) & 0x1F;

        // Extract immediate (bits 16-31)
        decoded.imm = instruction & 0xFFFF;

        // Extract extended opcode (bits 21-30)
        decoded.xo = (instruction >> 1) & 0x3FF;

        // Extract other fields based on instruction type
        switch (decoded.opcode)
        {
            case 0x1F: // Extended opcode
                decoded.oe = (instruction >> 10) & 0x1;
                decoded.rc = (instruction >> 0) & 0x1;
                break;

            case 0x12: // Branch
                decoded.aa = (instruction >> 1) & 0x1;
                decoded.lk = (instruction >> 0) & 0x1;
                decoded.li = instruction & 0x3FFFFFC;
                break;

            case 0x10: // Branch conditional
                decoded.bo = (instruction >> 21) & 0x1F;
                decoded.bi = (instruction >> 16) & 0x1F;
                decoded.aa = (instruction >> 1) & 0x1;
                decoded.lk = (instruction >> 0) & 0x1;
                decoded.bd = instruction & 0xFFFC;
                break;

            case 0x13: // System call
                decoded.imm = instruction & 0xFFFFFF;
                break;

            case 0x1C: // Floating-point
                decoded.frt = (instruction >> 21) & 0x1F;
                decoded.fra = (instruction >> 16) & 0x1F;
                decoded.frb = (instruction >> 11) & 0x1F;
                decoded.frc = (instruction >> 6) & 0x1F;
                decoded.frs = (instruction >> 1) & 0x1F;
                decoded.fcr = (instruction >> 0) & 0x1;
                break;

            case 0x1D: // Vector
                decoded.vrt = (instruction >> 21) & 0x1F;
                decoded.vra = (instruction >> 16) & 0x1F;
                decoded.vrb = (instruction >> 11) & 0x1F;
                decoded.vrc = (instruction >> 6) & 0x1F;
                decoded.vrs = (instruction >> 1) & 0x1F;
                decoded.vsh = (instruction >> 0) & 0x1;
                break;
        }

        return true;
    }

    bool CPUCore::ExecuteInstruction(const PPCInstruction& inst)
    {
        try {
            // Handle instruction based on primary opcode
            switch (inst.opcode) {
                case 31: // Extended opcode instructions
                    ExecuteExtendedOpcode(inst);
                    break;

                case 14: // addi - Add Immediate
                    gpr[inst.rD] = (inst.rA ? gpr[inst.rA] : 0) + static_cast<int16_t>(inst.imm);
                    break;

                case 15: // addis - Add Immediate Shifted
                    gpr[inst.rD] = (inst.rA ? gpr[inst.rA] : 0) + (inst.imm << 16);
                    break;

                case 16: // bc - Branch Conditional
                    {
                        bool ctrOk = true;
                        bool condOk = true;

                        // Check CTR condition
                        if (!(inst.bo & 0x4)) {
                            ctr--;
                            ctrOk = ((inst.bo & 0x2) ? (ctr == 0) : (ctr != 0));
                        }

                        // Check condition register bit
                        if (!(inst.bo & 0x10)) {
                            uint32_t crbit = (cr[inst.bi >> 2] >> (3 - (inst.bi & 3))) & 1;
                            condOk = ((inst.bo & 0x8) ? crbit : !crbit);
                        }

                        if (ctrOk && condOk) {
                            uint32_t target = inst.bd;
                            if (!inst.aa) target += pc;
                            if (inst.lk) lr = pc + 4;
                            pc = target - 4; // -4 because pc will be incremented after execution
                        }
                    }
                    break;

                case 18: // b - Branch
                    {
                        uint32_t target = inst.li;
                        if (!inst.aa) target += pc;
                        if (inst.lk) lr = pc + 4;
                        pc = target - 4; // -4 because pc will be incremented after execution
                    }
                    break;

                case 19: // Extended branch opcodes
                    switch (inst.xo) {
                        case 16: // bclr - Branch Conditional to Link Register
                            {
                                bool ctrOk = true;
                                bool condOk = true;

                                if (!(inst.bo & 0x4)) {
                                    ctr--;
                                    ctrOk = ((inst.bo & 0x2) ? (ctr == 0) : (ctr != 0));
                                }

                                if (!(inst.bo & 0x10)) {
                                    uint32_t crbit = (cr[inst.bi >> 2] >> (3 - (inst.bi & 3))) & 1;
                                    condOk = ((inst.bo & 0x8) ? crbit : !crbit);
                                }

                                if (ctrOk && condOk) {
                                    uint32_t target = lr & ~3;
                                    if (inst.lk) lr = pc + 4;
                                    pc = target - 4;
                                }
                            }
                            break;
                    }
                    break;

                case 32: // lwz - Load Word and Zero
                    {
                        uint32_t addr = (inst.rA ? gpr[inst.rA] : 0) + static_cast<int16_t>(inst.imm);
                        uint32_t val;
                        if (addr + 4 <= memory.size()) {
                            std::memcpy(&val, &memory[addr], 4);
                            gpr[inst.rD] = val;
                        } else {
                            Logger::Error("Memory access violation at 0x%08X", addr);
                            throw std::runtime_error("Memory access violation");
                        }
                    }
                    break;

                case 36: // stw - Store Word
                    {
                        uint32_t addr = (inst.rA ? gpr[inst.rA] : 0) + static_cast<int16_t>(inst.imm);
                        if (addr + 4 <= memory.size()) {
                            std::memcpy(&memory[addr], &gpr[inst.rD], 4);
                        } else {
                            Logger::Error("Memory access violation at 0x%08X", addr);
                            throw std::runtime_error("Memory access violation");
                        }
                    }
                    break;

                case 40: // lhz - Load Half Word and Zero
                    {
                        uint32_t addr = (inst.rA ? gpr[inst.rA] : 0) + static_cast<int16_t>(inst.imm);
                        uint16_t val;
                        if (addr + 2 <= memory.size()) {
                            std::memcpy(&val, &memory[addr], 2);
                            gpr[inst.rD] = val;
                        } else {
                            Logger::Error("Memory access violation at 0x%08X", addr);
                            throw std::runtime_error("Memory access violation");
                        }
                    }
                    break;

                case 44: // sth - Store Half Word
                    {
                        uint32_t addr = (inst.rA ? gpr[inst.rA] : 0) + static_cast<int16_t>(inst.imm);
                        if (addr + 2 <= memory.size()) {
                            uint16_t val = gpr[inst.rD] & 0xFFFF;
                            std::memcpy(&memory[addr], &val, 2);
                        } else {
                            Logger::Error("Memory access violation at 0x%08X", addr);
                            throw std::runtime_error("Memory access violation");
                        }
                    }
                    break;

                case 34: // lbz - Load Byte and Zero
                    {
                        uint32_t addr = (inst.rA ? gpr[inst.rA] : 0) + static_cast<int16_t>(inst.imm);
                        if (addr < memory.size()) {
                            gpr[inst.rD] = memory[addr];
                        } else {
                            Logger::Error("Memory access violation at 0x%08X", addr);
                            throw std::runtime_error("Memory access violation");
                        }
                    }
                    break;

                case 38: // stb - Store Byte
                    {
                        uint32_t addr = (inst.rA ? gpr[inst.rA] : 0) + static_cast<int16_t>(inst.imm);
                        if (addr < memory.size()) {
                            memory[addr] = gpr[inst.rD] & 0xFF;
                        } else {
                            Logger::Error("Memory access violation at 0x%08X", addr);
                            throw std::runtime_error("Memory access violation");
                        }
                    }
                    break;

                default:
                    Logger::Warning("Unimplemented opcode: 0x%02X", inst.opcode);
                    break;
            }

            Logger::Debug("Executed instruction: opcode=0x%02X, xo=0x%03X", inst.opcode, inst.xo);
            return true;
        }
        catch (const std::exception& e) {
            Logger::Error("Instruction execution failed: %s", e.what());
            throw;
        }
    }

    bool CPUCore::ExecuteExtendedOpcode(const PPCInstruction& inst)
    {
        switch (inst.xo) {
            case 266: // add
            case 40:  // subf (subtract from)
            case 0:   // cmp
            case 32:  // cmpl
            case 144: // mtcrf - Move to Condition Register Fields
                {
                    uint32_t crm = (inst.imm >> 1) & 0xFF;
                    uint32_t mask = 0;
                    for (int i = 0; i < 8; i++) {
                        if (crm & (1 << (7-i))) {
                            mask |= 0xF << (4 * i);
                        }
                    }
                    uint32_t newCR = (gpr[inst.rS] & mask) | (GetCR() & ~mask);
                    SetCR(newCR);
                }
                return true;

            case 339: // mfspr - Move from Special Purpose Register
                switch (((inst.imm >> 6) & 0x3FF)) {
                    case 8: // LR
                        gpr[inst.rD] = lr;
                        break;
                    case 9: // CTR
                        gpr[inst.rD] = ctr;
                        break;
                    default:
                        Logger::Warning("Unimplemented SPR read: %u", ((inst.imm >> 6) & 0x3FF));
                        break;
                }
                return true;

            case 467: // mtspr - Move to Special Purpose Register
                switch (((inst.imm >> 6) & 0x3FF)) {
                    case 8: // LR
                        lr = gpr[inst.rS];
                        break;
                    case 9: // CTR
                        ctr = gpr[inst.rS];
                        break;
                    default:
                        Logger::Warning("Unimplemented SPR write: %u", ((inst.imm >> 6) & 0x3FF));
                        break;
                }
                return true;

            default:
                Logger::Warning("Unimplemented extended opcode: 0x%03X", inst.xo);
                return false;
        }
    }

    void CPUCore::UpdateCR(uint32_t value)
    {
        uint32_t cr = GetCR();
        cr = (cr & ~(0xF << (28 - decoded.crfD * 4))) | ((value & 0xF) << (28 - decoded.crfD * 4));
        SetCR(cr);
    }

    void CPUCore::UpdateXER(uint32_t value)
    {
        SetXER(value);
    }

    void CPUCore::UpdateFPSCR(uint32_t value)
    {
        SetFPSCR(value);
    }

    void CPUCore::UpdateMSR(uint32_t value)
    {
        SetMSR(value);
    }

    void CPUCore::UpdateLR(uint32_t value)
    {
        SetLR(value);
    }

    void CPUCore::UpdateCTR(uint32_t value)
    {
        SetCTR(value);
    }

    void CPUCore::UpdateSPR(uint32_t spr, uint32_t value)
    {
        SetSPR(spr, value);
    }

    void CPUCore::UpdateGPR(uint32_t rD, uint32_t value)
    {
        SetGPR(rD, value);
    }

    void CPUCore::UpdateFPR(uint32_t frD, double value)
    {
        SetFPR(frD, value);
    }

    void CPUCore::UpdateVR(uint32_t vrt, const uint8_t* value)
    {
        if (vrt >= 32)
        {
            BeanRecomp::OS::Logger::LogError("Invalid vector register index: %u", vrt);
            return;
        }

        std::memcpy(m_VR.data() + (vrt * 16), value, 16);
    }

    void CPUCore::UpdateCRF(uint32_t crfD, uint32_t value)
    {
        UpdateCR(value);
    }

    void CPUCore::UpdateCRB(uint32_t crbD, bool value)
    {
        uint32_t cr = GetCR();
        if (value)
            cr |= 1U << (31 - crbD);
        else
            cr &= ~(1U << (31 - crbD));
        SetCR(cr);
    }

    void CPUCore::UpdateCRX(uint32_t crxD, uint32_t value)
    {
        UpdateCR(value);
    }

    void CPUCore::UpdateCRL(uint32_t crlD, uint32_t value)
    {
        UpdateCR(value);
    }

    void CPUCore::UpdateCRU(uint32_t cruD, uint32_t value)
    {
        UpdateCR(value);
    }

    void CPUCore::UpdateCRS(uint32_t crsD, uint32_t value)
    {
        UpdateCR(value);
    }

    void CPUCore::UpdateCRT(uint32_t crtD, uint32_t value)
    {
        UpdateCR(value);
    }

    void CPUCore::UpdateCRW(uint32_t crwD, uint32_t value)
    {
        UpdateCR(value);
    }

    void CPUCore::UpdateCRY(uint32_t cryD, uint32_t value)
    {
        UpdateCR(value);
    }

    void CPUCore::UpdateCRZ(uint32_t crzD, uint32_t value)
    {
        UpdateCR(value);
    }

    void CPUCore::UpdateCR0(uint32_t value)
    {
        UpdateCR(value);
    }

    void CPUCore::UpdateCR1(uint32_t value)
    {
        UpdateCR(value);
    }

    void CPUCore::UpdateCR2(uint32_t value)
    {
        UpdateCR(value);
    }

    void CPUCore::UpdateCR3(uint32_t value)
    {
        UpdateCR(value);
    }

    void CPUCore::UpdateCR4(uint32_t value)
    {
        UpdateCR(value);
    }

    void CPUCore::UpdateCR5(uint32_t value)
    {
        UpdateCR(value);
    }

    void CPUCore::UpdateCR6(uint32_t value)
    {
        UpdateCR(value);
    }

    void CPUCore::UpdateCR7(uint32_t value)
    {
        UpdateCR(value);
    }

    void CPUCore::UpdateCR8(uint32_t value)
    {
        UpdateCR(value);
    }

    void CPUCore::UpdateCR9(uint32_t value)
    {
        UpdateCR(value);
    }

    void CPUCore::UpdateCR10(uint32_t value)
    {
        UpdateCR(value);
    }

    void CPUCore::UpdateCR11(uint32_t value)
    {
        UpdateCR(value);
    }

    void CPUCore::UpdateCR12(uint32_t value)
    {
        UpdateCR(value);
    }

    void CPUCore::UpdateCR13(uint32_t value)
    {
        UpdateCR(value);
    }

    void CPUCore::UpdateCR14(uint32_t value)
    {
        UpdateCR(value);
    }

    void CPUCore::UpdateCR15(uint32_t value)
    {
        UpdateCR(value);
    }

    void CPUCore::UpdateCR16(uint32_t value)
    {
        UpdateCR(value);
    }

    void CPUCore::UpdateCR17(uint32_t value)
    {
        UpdateCR(value);
    }

    void CPUCore::UpdateCR18(uint32_t value)
    {
        UpdateCR(value);
    }

    void CPUCore::UpdateCR19(uint32_t value)
    {
        UpdateCR(value);
    }

    void CPUCore::UpdateCR20(uint32_t value)
    {
        UpdateCR(value);
    }

    void CPUCore::UpdateCR21(uint32_t value)
    {
        UpdateCR(value);
    }

    void CPUCore::UpdateCR22(uint32_t value)
    {
        UpdateCR(value);
    }

    void CPUCore::UpdateCR23(uint32_t value)
    {
        UpdateCR(value);
    }

    void CPUCore::UpdateCR24(uint32_t value)
    {
        UpdateCR(value);
    }

    void CPUCore::UpdateCR25(uint32_t value)
    {
        UpdateCR(value);
    }

    void CPUCore::UpdateCR26(uint32_t value)
    {
        UpdateCR(value);
    }

    void CPUCore::UpdateCR27(uint32_t value)
    {
        UpdateCR(value);
    }

    void CPUCore::UpdateCR28(uint32_t value)
    {
        UpdateCR(value);
    }

    void CPUCore::UpdateCR29(uint32_t value)
    {
        UpdateCR(value);
    }

    void CPUCore::UpdateCR30(uint32_t value)
    {
        UpdateCR(value);
    }

    void CPUCore::UpdateCR31(uint32_t value)
    {
        UpdateCR(value);
    }

    void CPUCore::GetVR(uint32_t index, uint8_t* value) const
    {
        if (index >= 32)
        {
            BeanRecomp::OS::Logger::LogError("Invalid vector register index: %u", index);
            return;
        }

        std::memcpy(value, m_VR.data() + (index * 16), 16);
    }

    bool CPUCore::LoadProgram(const std::vector<uint8_t>& program, uint32_t loadAddress)
    {
        try {
            // Ensure the memory map is large enough
            if (loadAddress + program.size() > memory.size()) {
                memory.resize(loadAddress + program.size());
            }
            
            // Copy program into memory
            std::copy(program.begin(), program.end(), memory.begin() + loadAddress);
            
            // Set initial PC to load address
            pc = loadAddress;
            
            Logger::Info("Program loaded at address 0x%08X, size: %zu bytes", loadAddress, program.size());
            return true;
        }
        catch (const std::exception& e) {
            Logger::Error("Failed to load program: %s", e.what());
            return false;
        }
    }

    bool CPUCore::MapMemory(uint32_t virtualAddr, uint32_t physicalAddr, uint32_t size, uint32_t flags)
    {
        try {
            PageTableEntry entry;
            entry.virtualAddress = virtualAddr;
            entry.physicalAddress = physicalAddr;
            entry.size = size;
            entry.flags = flags;
            entry.valid = true;
            
            pageTable[virtualAddr] = entry;
            
            Logger::Debug("Mapped memory: VA=0x%08X, PA=0x%08X, Size=%u, Flags=0x%08X",
                virtualAddr, physicalAddr, size, flags);
            return true;
        }
        catch (const std::exception& e) {
            Logger::Error("Failed to map memory: %s", e.what());
            return false;
        }
    }

    bool CPUCore::UnmapMemory(uint32_t virtualAddr)
    {
        auto it = pageTable.find(virtualAddr);
        if (it != pageTable.end()) {
            pageTable.erase(it);
            Logger::Debug("Unmapped memory at VA=0x%08X", virtualAddr);
            return true;
        }
        
        Logger::Warning("Attempted to unmap non-existent memory at VA=0x%08X", virtualAddr);
        return false;
    }

    uint32_t CPUCore::TranslateAddress(uint32_t virtualAddr)
    {
        auto it = pageTable.find(virtualAddr & ~0xFFF); // Page align the address
        if (it != pageTable.end() && it->second.valid) {
            uint32_t offset = virtualAddr & 0xFFF;
            return it->second.physicalAddress + offset;
        }
        
        Logger::Error("Failed to translate virtual address 0x%08X", virtualAddr);
        throw std::runtime_error("Memory translation failed");
    }

    bool CPUCore::Step()
    {
        try {
            // Read instruction from memory
            uint32_t physicalPC = TranslateAddress(pc);
            if (physicalPC + sizeof(uint32_t) > memory.size()) {
                Logger::Error("PC out of bounds: 0x%08X", pc);
                return false;
            }
            
            uint32_t rawInstruction;
            std::memcpy(&rawInstruction, &memory[physicalPC], sizeof(uint32_t));
            
            // Decode instruction
            PPCInstruction inst = DecodeInstruction(rawInstruction);
            
            // Execute instruction
            ExecuteInstruction(inst);
            
            // Increment PC
            pc += 4;
            
            return true;
        }
        catch (const std::exception& e) {
            Logger::Error("CPU step failed: %s", e.what());
            return false;
        }
    }

    PPCInstruction CPUCore::DecodeInstruction(uint32_t rawInstruction)
    {
        PPCInstruction inst;
        
        // Extract primary opcode (bits 0-5)
        inst.opcode = (rawInstruction >> 26) & 0x3F;
        
        // Extract common fields
        inst.rD = (rawInstruction >> 21) & 0x1F;
        inst.rA = (rawInstruction >> 16) & 0x1F;
        inst.rB = (rawInstruction >> 11) & 0x1F;
        inst.rC = (rawInstruction >> 6) & 0x1F;
        inst.xo = (rawInstruction >> 1) & 0x3FF;
        inst.rc = rawInstruction & 0x1;
        
        // Extract format-specific fields based on opcode
        switch (inst.opcode) {
            case 31: // Extended opcode format
                inst.xo = (rawInstruction >> 1) & 0x3FF;
                inst.oe = (rawInstruction >> 10) & 0x1;
                break;
                
            case 16: // Branch conditional
            case 17: // Branch conditional to count register
                inst.bo = (rawInstruction >> 21) & 0x1F;
                inst.bi = (rawInstruction >> 16) & 0x1F;
                inst.bd = (rawInstruction >> 2) & 0x3FFF;
                inst.aa = (rawInstruction >> 1) & 0x1;
                inst.lk = rawInstruction & 0x1;
                break;
                
            case 18: // Branch
                inst.li = (rawInstruction >> 2) & 0xFFFFFF;
                inst.aa = (rawInstruction >> 1) & 0x1;
                inst.lk = rawInstruction & 0x1;
                break;
                
            default:
                // For immediate format instructions
                inst.imm = rawInstruction & 0xFFFF;
                break;
        }
        
        return inst;
    }

    // PPCManager implementation
    bool PPCManager::Initialize()
    {
        if (s_Initialized)
            return true;

        std::lock_guard<std::mutex> lock(s_PPCMutex);

        // Initialize logger
        if (!OS::Logger::Initialize())
        {
            std::cerr << "Failed to initialize logger" << std::endl;
            return false;
        }

        BeanRecomp::OS::Logger::LogInfo("Initializing PPC system");
        
        InitializePPC();
        
        s_Initialized = true;
        return true;
    }

    void PPCManager::Shutdown()
    {
        if (!s_Initialized)
            return;

        std::lock_guard<std::mutex> lock(s_PPCMutex);

        BeanRecomp::OS::Logger::LogInfo("Shutting down PPC system");
        
        CleanupPPC();
        
        s_Initialized = false;
    }

    std::shared_ptr<CPUCore> PPCManager::CreateCore()
    {
        std::lock_guard<std::mutex> lock(s_PPCMutex);
        
        auto core = std::make_shared<CPUCore>();
        if (!core->Initialize())
        {
            BeanRecomp::OS::Logger::LogError("Failed to initialize CPU core");
            return nullptr;
        }
        
        s_Cores.push_back(core);
        
        if (PPCManager::IsDebugMode())
            BeanRecomp::OS::Logger::LogDebug("Created new CPU core");
            
        return core;
    }

    void PPCManager::DestroyCore(std::shared_ptr<CPUCore> core)
    {
        std::lock_guard<std::mutex> lock(s_PPCMutex);
        
        auto it = std::find(s_Cores.begin(), s_Cores.end(), core);
        if (it != s_Cores.end())
        {
            s_Cores.erase(it);
            
            if (PPCManager::IsDebugMode())
                BeanRecomp::OS::Logger::LogDebug("Destroyed CPU core");
        }
    }

    void PPCManager::UpdateCores()
    {
        std::lock_guard<std::mutex> lock(s_PPCMutex);
        
        for (auto& core : s_Cores)
        {
            core->Update();
        }
        
        ProcessInterrupts();
        UpdateMemory();
    }

    void PPCManager::ResetCores()
    {
        std::lock_guard<std::mutex> lock(s_PPCMutex);
        
        for (auto& core : s_Cores)
        {
            core->Reset();
        }
        
        if (PPCManager::IsDebugMode())
            BeanRecomp::OS::Logger::LogDebug("Reset all CPU cores");
    }

    bool PPCManager::AllocateMemory(uint32_t size)
    {
        std::lock_guard<std::mutex> lock(s_PPCMutex);
        
        try
        {
            s_Memory.resize(size);
            
            if (PPCManager::IsDebugMode())
                BeanRecomp::OS::Logger::LogDebug("Allocated %u bytes of memory", size);
                
            return true;
        }
        catch (const std::exception& e)
        {
            BeanRecomp::OS::Logger::LogError("Failed to allocate memory: %s", e.what());
            return false;
        }
    }

    void PPCManager::FreeMemory()
    {
        std::lock_guard<std::mutex> lock(s_PPCMutex);
        
        s_Memory.clear();
        
        if (PPCManager::IsDebugMode())
            BeanRecomp::OS::Logger::LogDebug("Freed memory");
    }

    bool PPCManager::ReadMemory(uint32_t address, void* data, uint32_t size)
    {
        std::lock_guard<std::mutex> lock(s_PPCMutex);
        
        if (address + size > s_Memory.size())
            return false;
            
        std::memcpy(data, s_Memory.data() + address, size);
        return true;
    }

    bool PPCManager::WriteMemory(uint32_t address, const void* data, uint32_t size)
    {
        std::lock_guard<std::mutex> lock(s_PPCMutex);
        
        if (address + size > s_Memory.size())
            return false;
            
        std::memcpy(s_Memory.data() + address, data, size);
        return true;
    }

    bool PPCManager::MapMemory(uint32_t address, uint32_t size, uint32_t flags)
    {
        std::lock_guard<std::mutex> lock(s_PPCMutex);
        
        if (!s_CPUConfig.enableMMU)
            return false;

        // Check if memory range is valid
        if (address + size > s_Memory.size())
        {
            BeanRecomp::OS::Logger::LogError("Invalid memory range: 0x%08X - 0x%08X", address, address + size);
            return false;
        }

        // Set up page table entry
        uint32_t pageSize = 4096; // 4KB pages
        uint32_t startPage = address / pageSize;
        uint32_t endPage = (address + size + pageSize - 1) / pageSize;

        for (uint32_t page = startPage; page < endPage; page++)
        {
            uint32_t pageAddress = page * pageSize;
            uint32_t physicalAddress = pageAddress;

            // Create page table entry
            PageTableEntry entry;
            entry.virtualAddress = pageAddress;
            entry.physicalAddress = physicalAddress;
            entry.size = pageSize;
            entry.flags = flags;
            entry.valid = true;

            // Add to page table
            s_PageTable[pageAddress] = entry;

            if (PPCManager::IsDebugMode())
                BeanRecomp::OS::Logger::LogDebug("Mapped memory page 0x%08X -> 0x%08X (flags: 0x%08X)", 
                    pageAddress, physicalAddress, flags);
        }

        return true;
    }

    bool PPCManager::UnmapMemory(uint32_t address)
    {
        std::lock_guard<std::mutex> lock(s_PPCMutex);
        
        if (!s_CPUConfig.enableMMU)
            return false;

        // Find page table entry
        auto it = s_PageTable.find(address);
        if (it == s_PageTable.end())
        {
            BeanRecomp::OS::Logger::LogError("No memory mapping found at address 0x%08X", address);
            return false;
        }

        // Remove page table entry
        s_PageTable.erase(it);

        if (PPCManager::IsDebugMode())
            BeanRecomp::OS::Logger::LogDebug("Unmapped memory at address 0x%08X", address);

        return true;
    }

    bool PPCManager::DecodeInstruction(uint32_t instruction)
    {
        std::lock_guard<std::mutex> lock(s_PPCMutex);
        
        // TODO: Implement instruction decoding
        // This would typically involve:
        // 1. Extracting opcode
        // 2. Extracting operands
        // 3. Validating instruction format
        
        return true;
    }

    bool PPCManager::ExecuteInstruction(uint32_t instruction)
    {
        std::lock_guard<std::mutex> lock(s_PPCMutex);
        
        // TODO: Implement instruction execution
        // This would typically involve:
        // 1. Decoding instruction
        // 2. Executing operation
        // 3. Updating CPU state
        
        return true;
    }

    bool PPCManager::CompileInstruction(uint32_t instruction)
    {
        std::lock_guard<std::mutex> lock(s_PPCMutex);
        
        // TODO: Implement instruction compilation
        // This would typically involve:
        // 1. Decoding instruction
        // 2. Generating native code
        // 3. Caching compiled code
        
        return true;
    }

    void PPCManager::InvalidateCodeCache(uint32_t address, uint32_t size)
    {
        std::lock_guard<std::mutex> lock(s_PPCMutex);
        
        // TODO: Implement code cache invalidation
        // This would typically involve:
        // 1. Finding affected cache entries
        // 2. Removing cached code
        // 3. Recompiling if needed
    }

    void PPCManager::RaiseInterrupt(uint32_t vector)
    {
        std::lock_guard<std::mutex> lock(s_PPCMutex);
        
        if (std::find(s_PendingInterrupts.begin(), s_PendingInterrupts.end(), vector) == s_PendingInterrupts.end())
        {
            s_PendingInterrupts.push_back(vector);
            
            if (PPCManager::IsDebugMode())
                BeanRecomp::OS::Logger::LogDebug("Raised interrupt vector %u", vector);
        }
    }

    void PPCManager::ClearInterrupt(uint32_t vector)
    {
        std::lock_guard<std::mutex> lock(s_PPCMutex);
        
        auto it = std::find(s_PendingInterrupts.begin(), s_PendingInterrupts.end(), vector);
        if (it != s_PendingInterrupts.end())
        {
            s_PendingInterrupts.erase(it);
            
            if (PPCManager::IsDebugMode())
                BeanRecomp::OS::Logger::LogDebug("Cleared interrupt vector %u", vector);
        }
    }

    bool PPCManager::HasPendingInterrupts()
    {
        std::lock_guard<std::mutex> lock(s_PPCMutex);
        return !s_PendingInterrupts.empty();
    }

    bool PPCManager::SetCPUConfig(const CPUConfig& config)
    {
        std::lock_guard<std::mutex> lock(s_PPCMutex);
        
        s_CPUConfig = config;
        
        if (PPCManager::IsDebugMode())
            BeanRecomp::OS::Logger::LogDebug("Updated CPU configuration");
            
        return true;
    }

    const CPUConfig& PPCManager::GetCPUConfig()
    {
        std::lock_guard<std::mutex> lock(s_PPCMutex);
        return s_CPUConfig;
    }

    void PPCManager::SetMMUEnabled(bool enable)
    {
        std::lock_guard<std::mutex> lock(s_PPCMutex);
        s_CPUConfig.enableMMU = enable;
    }

    bool PPCManager::IsMMUEnabled()
    {
        std::lock_guard<std::mutex> lock(s_PPCMutex);
        return s_CPUConfig.enableMMU;
    }

    void PPCManager::SetDebugMode(bool enable)
    {
        std::lock_guard<std::mutex> lock(s_PPCMutex);
        s_DebugMode = enable;
        BeanRecomp::OS::Logger::LogInfo("PPC debug mode: %s", enable ? "enabled" : "disabled");
    }

    bool PPCManager::IsDebugMode()
    {
        std::lock_guard<std::mutex> lock(s_PPCMutex);
        return s_DebugMode;
    }

    void PPCManager::DumpCPUState()
    {
        std::lock_guard<std::mutex> lock(s_PPCMutex);
        
        BeanRecomp::OS::Logger::LogInfo("PPC System State:");
        BeanRecomp::OS::Logger::LogInfo("  Initialized: %s", s_Initialized ? "yes" : "no");
        BeanRecomp::OS::Logger::LogInfo("  Debug Mode: %s", s_DebugMode ? "yes" : "no");
        BeanRecomp::OS::Logger::LogInfo("  CPU Cores: %zu", s_Cores.size());
        BeanRecomp::OS::Logger::LogInfo("  Memory Size: %zu", s_Memory.size());
        BeanRecomp::OS::Logger::LogInfo("  Pending Interrupts: %zu", s_PendingInterrupts.size());
        
        // Log CPU configuration
        BeanRecomp::OS::Logger::LogInfo("  CPU Configuration:");
        BeanRecomp::OS::Logger::LogInfo("    Core Count: %u", s_CPUConfig.coreCount);
        BeanRecomp::OS::Logger::LogInfo("    MMU Enabled: %s", s_CPUConfig.enableMMU ? "yes" : "no");
        BeanRecomp::OS::Logger::LogInfo("    FPU Enabled: %s", s_CPUConfig.enableFPU ? "yes" : "no");
        BeanRecomp::OS::Logger::LogInfo("    Altivec Enabled: %s", s_CPUConfig.enableAltivec ? "yes" : "no");
        BeanRecomp::OS::Logger::LogInfo("    Debug Enabled: %s", s_CPUConfig.enableDebug ? "yes" : "no");
    }

    void PPCManager::InitializePPC()
    {
        // Initialize memory system
        if (!AllocateMemory(0x10000000)) // 256MB default memory size
        {
            BeanRecomp::OS::Logger::LogError("Failed to allocate memory");
            return;
        }

        // Initialize MMU if enabled
        if (s_CPUConfig.enableMMU)
        {
            s_PageTable.clear();
            if (PPCManager::IsDebugMode())
                BeanRecomp::OS::Logger::LogDebug("Initialized MMU");
        }

        // Initialize interrupt system
        s_PendingInterrupts.clear();

        // Initialize CPU cores
        s_Cores.clear();
        for (uint32_t i = 0; i < s_CPUConfig.coreCount; i++)
        {
            auto core = std::make_shared<CPUCore>();
            if (!core->Initialize())
            {
                BeanRecomp::OS::Logger::LogError("Failed to initialize CPU core %u", i);
                continue;
            }
            s_Cores.push_back(core);
        }

        if (PPCManager::IsDebugMode())
            BeanRecomp::OS::Logger::LogDebug("Initialized PPC system with %u cores", s_CPUConfig.coreCount);
    }

    void PPCManager::CleanupPPC()
    {
        // Cleanup CPU cores
        for (auto& core : s_Cores)
        {
            core->Shutdown();
        }
        s_Cores.clear();

        // Cleanup memory system
        FreeMemory();
        s_PageTable.clear();

        // Cleanup interrupt system
        s_PendingInterrupts.clear();

        if (PPCManager::IsDebugMode())
            BeanRecomp::OS::Logger::LogDebug("Cleaned up PPC system");
    }

    void PPCManager::ProcessInterrupts()
    {
        if (s_PendingInterrupts.empty())
            return;

        // Process interrupts in priority order
        std::sort(s_PendingInterrupts.begin(), s_PendingInterrupts.end());

        for (auto& core : s_Cores)
        {
            if (core->GetState() != CPUState::RUNNING)
                continue;

            // Check if interrupts are enabled for this core
            uint32_t msr = core->GetMSR();
            if (!(msr & 0x8000)) // Check MSR[EE] bit
                continue;

            for (uint32_t vector : s_PendingInterrupts)
            {
                // Save current state
                uint32_t oldMSR = core->GetMSR();
                uint32_t oldPC = core->GetPC();

                // Update MSR for interrupt handling
                uint32_t newMSR = oldMSR;
                newMSR &= ~0x87F0; // Clear EE, PR, FP, ME, FE0, FE1, IS, DS
                newMSR |= 0x1000;  // Set MSR[IP]
                core->SetMSR(newMSR);

                // Set PC to interrupt vector
                core->SetPC(vector);

                // Save return address
                core->SetLR(oldPC);

                if (PPCManager::IsDebugMode())
                    BeanRecomp::OS::Logger::LogDebug("Processing interrupt vector %u on core %p", 
                        vector, static_cast<void*>(core.get()));
            }
        }

        s_PendingInterrupts.clear();
    }

    void PPCManager::UpdateMemory()
    {
        if (!s_CPUConfig.enableMMU)
            return;

        // Process memory access violations
        for (auto& core : s_Cores)
        {
            if (core->GetState() != CPUState::RUNNING)
                continue;

            uint32_t pc = core->GetPC();
            auto it = s_PageTable.find(pc & ~0xFFF);
            if (it == s_PageTable.end() || !it->second.valid)
            {
                // Page fault on instruction fetch
                core->HandleException(0x400);
                continue;
            }

            // Check memory access permissions
            if (!(it->second.flags & 0x1)) // Execute permission
            {
                core->HandleException(0x700);
                continue;
            }
        }

        // Update memory statistics if debug mode is enabled
        if (PPCManager::IsDebugMode())
        {
            static uint64_t s_TotalReads = 0;
            static uint64_t s_TotalWrites = 0;
            static uint64_t s_PageFaults = 0;

            // Log memory statistics periodically
            if ((s_TotalReads + s_TotalWrites) % 1000000 == 0)
            {
                BeanRecomp::OS::Logger::LogDebug("Memory Statistics:");
                BeanRecomp::OS::Logger::LogDebug("  Total Reads: %llu", s_TotalReads);
                BeanRecomp::OS::Logger::LogDebug("  Total Writes: %llu", s_TotalWrites);
                BeanRecomp::OS::Logger::LogDebug("  Page Faults: %llu", s_PageFaults);
                BeanRecomp::OS::Logger::LogDebug("  Page Table Size: %zu", s_PageTable.size());
            }
        }
    }
}
} 
#include "cpu.h"
#include "memory.h"
#include <cstdint>

class CPU {
    public:
        CPU();
        void reset();
        void executeInstruction(Memory &memory);
    private:
        uint16_t PC; // Program Counter
        uint8_t SP;  // Stack Pointer
        uint8_t A, B, C, D, E, H, L; // Registers
        bool halted;
        bool stopped;
        // Other CPU state variables
}
CPU::CPU() {
    // Initialize registers
    reset();
}

void CPU::reset() {
    // Reset CPU state
}

void CPU::executeInstruction(Memory &memory) {
    if (halted || stopped) {
        return;
    }

    uint8_t opcode = memory.read(PC++);
    switch (opcode) {
        // Add instruction handling here
        default:
            break;
    }
}

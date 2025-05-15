#include "cpu.h"
#include "memory.h"
#include <cstdint>


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

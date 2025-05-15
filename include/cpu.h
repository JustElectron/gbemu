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
#include <array>
#include <cstdint>
#include <stdexcept>

class Memory {
public:
    static constexpr size_t MEMORY_SIZE = 0x10000; // 64KB

    Memory() {
        memory.fill(0);
    }

    uint8_t read(uint16_t address) const {
        if (address >= MEMORY_SIZE) {
            throw std::out_of_range("Address out of range");
        }
        return memory[address];
    }

    void write(uint16_t address, uint8_t value) {
        if (address >= MEMORY_SIZE) {
            throw std::out_of_range("Address out of range");
        }
        memory[address] = value;
    }

private:
    std::array<uint8_t, MEMORY_SIZE> memory;
};
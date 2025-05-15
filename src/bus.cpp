// bus.cpp
#include "bus.h"
#include <cstdint>
#include <vector>
#include <memory>
#include <iostream>

Bus::Bus() {
    // Initialize memory to 0x00
    memory.fill(0x00);
}

uint8_t Bus::read(uint16_t address) const {
    if (address < memory.size()) {
        return memory[address];
    } else {
        std::cerr << "Read out of bounds: " << std::hex << address << std::endl;
        return 0xFF; // Return open bus value
    }
}

void Bus::write(uint16_t address, uint8_t data) {
    if (address < memory.size()) {
        memory[address] = data;
    } else {
        std::cerr << "Write out of bounds: " << std::hex << address << std::endl;
    }
}

void Bus::attachDevice(std::shared_ptr<Device> device) {
    devices.push_back(device);
}

void Bus::tick() {
    for (auto& device : devices) {
        device->tick();
    }
}

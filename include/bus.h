#include <array>
#include <vector>

class Bus {
public:
    Bus();
    uint8_t read(uint16_t address) const;
    void write(uint16_t address, uint8_t data);
    void attachDevice(std::shared_ptr<Device> device);
    void tick();

private:
    std::array<uint8_t, 0x10000> memory; // 64KB memory
    std::vector<std::shared_ptr<Device>> devices;
};
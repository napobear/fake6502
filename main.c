#include <stdio.h>
#include <stdint.h>

void reset6502(void);

uint8_t memory[0x10000];

uint8_t read6502(uint16_t address)
{
    return memory[address];
}

void write6502(uint16_t address, uint8_t value)
{
    memory[address] = value;
}

int main()
{
    reset6502();
}


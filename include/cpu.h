#pragma once

#include <common.h>

typedef struct 
{
    u8 A;
    u8 F;
    u8 B; 
    u8 C;
    u8 D;
    u8 E;
    u8 H;
    u8 L;
    u16 SP;
    u16 PC;     
} cpu_registers;

typedef struct 
{
    cpu_registers regs;

    u16 fetch_data;
    u16 mem_destination;
    u8 current_opcode;
    
    bool halted;
    bool stepping; 

} cpu_context;

void cpu_init();
bool cpu_step();

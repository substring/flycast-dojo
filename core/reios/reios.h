#ifndef REIOS_H
#define REIOS_H

#include "types.h"
#include "hw/flashrom/flashrom.h"

bool reios_init(u8* rom, MemChip *flash);

void reios_reset();

void reios_term();

void DYNACALL reios_trap(u32 op);

char* reios_disk_id();
extern char reios_device_info[17];
extern char reios_software_name[129];
extern char reios_product_number[11];
extern bool reios_windows_ce;

#define REIOS_OPCODE 0x085B

#endif //REIOS_H
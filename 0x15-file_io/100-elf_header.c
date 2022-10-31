#include <elf.h>
#include "main.h"
/*
 *ELF dump of '/bin/touch'
 *  97152(0x17b80) bytes
 */
ElF64_Dyn dumpedelf_dyn_0[];
struct {
	ElF64_Ehdr ehdr;
	ElF64_Phdr phdr[11];
	ElF64_Shdr shdr[29];
	ElF64_Dyn *dyns;
} dumpedelf_0 = {
	.ehdr = {
		.e_ident = { /* (EI_NIDENT bytes)*/
			/* [0] EI_MAG:       */ 0x7F, 'E', 'L', 'F',
			/* [4] EI_CLASS:     */ 2, /* (ELFCLASS64) */
			/* [5] EI_DATA:      */ 1, /* (ELFDATA2LSB) */
			/* [6] EI_VERSION:   */ 1, /* (EV_CURRENT) */
			/* [7] EI_OSABI:     */ 0, /* (ELFOSABI_NONE) */
			/* [8] EI_ABIVERSION:*/ 0,
			/* [9-15] EI_PAD:    */ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
		},
		.e_type        = 3   ,/*(ET_DYN) */
		.e_machine     = 62   ,/*(EM_X86_64) */
		.e_version     = 1   ,/*(EV_CURRENT) */
		.e_entry       =0x3E40 ,/*(start address at runtime) */

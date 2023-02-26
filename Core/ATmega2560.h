#ifndef __ATMEGA2560_H__
#define __ATMEGA2560_H__

#ifndef __CORE_H__
#error "Include <Core.h> instead of this file."
#endif

/* Registers and associated bit numbers */
#define DIRC  _SFR_IO8(0x26) // Data Input Port C Register
#define DIRC0 0              // Data Input Port C Bit 0
#define DIRC1 1              // Data Input Port C Bit 1
#define DIRC2 2              // Data Input Port C Bit 2
#define DIRC3 3              // Data Input Port C Bit 3
#define DIRC4 4              // Data Input Port C Bit 4
#define DIRC5 5              // Data Input Port C Bit 5
#define DIRC6 6              // Data Input Port C Bit 6
#define DIRC7 7              // Data Input Port C Bit 7

#define DDRC  _SFR_IO8(0x27) // Data Direction Port C Register
#define DDRC0 0              // Data Direction Port C Bit 0
#define DDRC1 1              // Data Direction Port C Bit 1
#define DDRC2 2              // Data Direction Port C Bit 2
#define DDRC3 3              // Data Direction Port C Bit 3
#define DDRC4 4              // Data Direction Port C Bit 4
#define DDRC5 5              // Data Direction Port C Bit 5
#define DDRC6 6              // Data Direction Port C Bit 6
#define DDRC7 7              // Data Direction Port C Bit 7

#define DORC  _SFR_IO8(0x28) // Data Output Port C Register
#define DORC0 0              // Data Output Port C Bit 0
#define DORC1 1              // Data Output Port C Bit 1
#define DORC2 2              // Data Output Port C Bit 2
#define DORC3 3              // Data Output Port C Bit 3
#define DORC4 4              // Data Output Port C Bit 4
#define DORC5 5              // Data Output Port C Bit 5
#define DORC6 6              // Data Output Port C Bit 6
#define DORC7 7              // Data Output Port C Bit 7

#endif

#ifndef __ATMEGA328PB_H__
#define __ATMEGA328PB_H__

#ifndef __CORE_H__
#error "Include <Core.h> instead of this file."
#endif

/* General macros */
/* TWI */
#define SCL_DDR DDRC // <Serial Clock> Data Direction Register
#define SCL_DOR DORC // <Serial Clock> Data Output Register
#define SCL_DIR DIRC // <Serial Clock> Data Input Register
#define SCL_BIT 5    // <Serial Clock> Bit
#define SDA_DDR DDRC // <Serial Data> Data Direction Register
#define SDA_DOR DORC // <Serial Data> Data Output Register
#define SDA_DIR DIRC // <Serial Data> Data Input Register
#define SDA_BIT 4    // <Serial Data> Bit
#define HAS_TWI1
#define SCL1_DDR DDRE // <Serial Clock> Data Direction Register
#define SCL1_DOR DORE // <Serial Clock> Data Output Register
#define SCL1_DIR DIRE // <Serial Clock> Data Input Register
#define SCL1_BIT 1    // <Serial Clock> Bit
#define SDA1_DDR DDRE // <Serial Data> Data Direction Register
#define SDA1_DOR DORE // <Serial Data> Data Output Register
#define SDA1_DIR DIRE // <Serial Data> Data Input Register
#define SDA1_BIT 0    // <Serial Data> Bit


/* Registers and associated bit numbers */
#define DIRB  _SFR_IO8(0x23) // Data Input Port B Register
#define DIRB0 0              // Data Input Port B Bit 0
#define DIRB1 1              // Data Input Port B Bit 1
#define DIRB2 2              // Data Input Port B Bit 2
#define DIRB3 3              // Data Input Port B Bit 3
#define DIRB4 4              // Data Input Port B Bit 4
#define DIRB5 5              // Data Input Port B Bit 5
#define DIRB6 6              // Data Input Port B Bit 6
#define DIRB7 7              // Data Input Port B Bit 7

#define DDRB  _SFR_IO8(0x24) // Data Direction Port B Register
#define DDRB0 0              // Data Direction Port B Bit 0
#define DDRB1 1              // Data Direction Port B Bit 1
#define DDRB2 2              // Data Direction Port B Bit 2
#define DDRB3 3              // Data Direction Port B Bit 3
#define DDRB4 4              // Data Direction Port B Bit 4
#define DDRB5 5              // Data Direction Port B Bit 5
#define DDRB6 6              // Data Direction Port B Bit 6
#define DDRB7 7              // Data Direction Port B Bit 7

#define DORB  _SFR_IO8(0x25) // Data Output Port B Register
#define DORB0 0              // Data Output Port B Bit 0
#define DORB1 1              // Data Output Port B Bit 1
#define DORB2 2              // Data Output Port B Bit 2
#define DORB3 3              // Data Output Port B Bit 3
#define DORB4 4              // Data Output Port B Bit 4
#define DORB5 5              // Data Output Port B Bit 5
#define DORB6 6              // Data Output Port B Bit 6
#define DORB7 7              // Data Output Port B Bit 7

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

#define DIRD  _SFR_IO8(0x29) // Data Input Port D Register
#define DIRD0 0              // Data Input Port D Bit 0
#define DIRD1 1              // Data Input Port D Bit 1
#define DIRD2 2              // Data Input Port D Bit 2
#define DIRD3 3              // Data Input Port D Bit 3
#define DIRD4 4              // Data Input Port D Bit 4
#define DIRD5 5              // Data Input Port D Bit 5
#define DIRD6 6              // Data Input Port D Bit 6
#define DIRD7 7              // Data Input Port D Bit 7

#define DDRD  _SFR_IO8(0x2A) // Data Direction Port D Register
#define DDRD0 0              // Data Direction Port D Bit 0
#define DDRD1 1              // Data Direction Port D Bit 1
#define DDRD2 2              // Data Direction Port D Bit 2
#define DDRD3 3              // Data Direction Port D Bit 3
#define DDRD4 4              // Data Direction Port D Bit 4
#define DDRD5 5              // Data Direction Port D Bit 5
#define DDRD6 6              // Data Direction Port D Bit 6
#define DDRD7 7              // Data Direction Port D Bit 7

#define DORD  _SFR_IO8(0x2B) // Data Output Port D Register
#define DORD0 0              // Data Output Port D Bit 0
#define DORD1 1              // Data Output Port D Bit 1
#define DORD2 2              // Data Output Port D Bit 2
#define DORD3 3              // Data Output Port D Bit 3
#define DORD4 4              // Data Output Port D Bit 4
#define DORD5 5              // Data Output Port D Bit 5
#define DORD6 6              // Data Output Port D Bit 6
#define DORD7 7              // Data Output Port D Bit 7

#define DIRE  _SFR_IO8(0x2C) // Data Input Port E Register
#define DIRE0 0              // Data Input Port E Bit 0
#define DIRE1 1              // Data Input Port E Bit 1
#define DIRE2 2              // Data Input Port E Bit 2
#define DIRE3 3              // Data Input Port E Bit 3
#define DIRE4 4              // Data Input Port E Bit 4
#define DIRE5 5              // Data Input Port E Bit 5
#define DIRE6 6              // Data Input Port E Bit 6
#define DIRE7 7              // Data Input Port E Bit 7

#define DDRE  _SFR_IO8(0x2D) // Data Direction Port E Register
#define DDRE0 0              // Data Direction Port E Bit 0
#define DDRE1 1              // Data Direction Port E Bit 1
#define DDRE2 2              // Data Direction Port E Bit 2
#define DDRE3 3              // Data Direction Port E Bit 3
#define DDRE4 4              // Data Direction Port E Bit 4
#define DDRE5 5              // Data Direction Port E Bit 5
#define DDRE6 6              // Data Direction Port E Bit 6
#define DDRE7 7              // Data Direction Port E Bit 7

#define DORE  _SFR_IO8(0x2E) // Data Output Port E Register
#define DORE0 0              // Data Output Port E Bit 0
#define DORE1 1              // Data Output Port E Bit 1
#define DORE2 2              // Data Output Port E Bit 2
#define DORE3 3              // Data Output Port E Bit 3
#define DORE4 4              // Data Output Port E Bit 4
#define DORE5 5              // Data Output Port E Bit 5
#define DORE6 6              // Data Output Port E Bit 6
#define DORE7 7              // Data Output Port E Bit 7

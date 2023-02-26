#ifndef __ATXMEGA256A3BU_H__
#define __ATXMEGA256A3BU_H__

#ifndef __CORE_H__
#error "Include <Core.h> instead of this file."
#endif

/* Registers and associated bit numbers */

#define CCPR _SFR_IO8(0x0034) // Configuration Change Protection Register

#define CCR _SFR_IO8(0x0040) // Clock Control Register
#define SCS2 2               // System Clock Selection Bit 2
#define SCS1 1               // System Clock Selection Bit 1
#define SCS0 0               // System Clock Selection Bit 0
/*
 * SCS[2:0] |  Configuration  |     Description     |
 *   000    | RC2MHz(default) | 2MHz internal osc.  |
 *   001    | RC32MHz         | 32MHz internal osc. |
 *   010    | RC32KHz         | 32KHz internal osc. |
 *   011    | XOSC            | External oscillator |
 *   100    | PLL             | Phase Locked Loop   |
*/

#define CLR  _SFR_IO8(0x0042) // Clock Lock Register
#define LOCK 0                // Clock Lock Bit

#define OCR _SFR_IO8(0x0050) // Oscillator Control Register
#define PLLEN   4            // PLL Enable Bit
#define XOSCEN  3            // External Oscillator Enable Bit
#define RC32KEN 2            // 32KHz Internal Oscillator Enable Bit
#define RC32MEN 1            // 32MHz Internal Oscillator Enable Bit
#define RC2MEN  0            // 2MHz Internal Oscillator Enable Bit

#define OSR _SFR_IO8(0x0051) // Oscillator Status Register
#define PLLRDY   4           // PLL Ready Bit
#define XOSCRDY  3           // External Oscillator Ready Bit
#define RC32KRDY 2           // 32KHz Internal Oscillator Ready Bit
#define RC32MRDY 1           // 32MHz Internal Oscillator Ready Bit
#define RC2MRDY  0           // 2MHz Internal Oscillator Ready Bit

#endif
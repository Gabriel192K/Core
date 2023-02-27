#ifndef __ATMEGA328P_H__
#define __ATMEGA328P_H__

#ifndef __CORE_H__
#error "Include <Core.h> instead of this file."
#endif

/* General macros */
/* TWI */
#define TWI_BUS      /* TWI bus */
#define SCL_DDR DDRC /* <Serial Clock> Data Direction Register */
#define SCL_DOR DORC /* <Serial Clock> Data Output Register */
#define SCL_DIR DIRC /* <Serial Clock> Data Input Register */
#define SCL_BIT 5    /* <Serial Clock> Bit */
#define SDA_DDR DDRC /* <Serial Data> Data Direction Register */
#define SDA_DOR DORC /* <Serial Data> Data Output Register */
#define SDA_DIR DIRC /* <Serial Data> Data Input Register */
#define SDA_BIT 4    /* <Serial Data> Bit */
/* SPI */
#define SPI_BUS       /* SPI bus */
#define SS_DDR DDRB   /* <Slave Select> Data Direction Register */
#define SS_DOR DORB   /* <Slave Select> Data Output Register */
#define SS_DIR DIRB   /* <Slave Select> Data Input Register */
#define SS_BIT 2      /* <Slave Select> Bit */
#define MOSI_DDR DDRB /* <Master-Out Slave-In> Data Direction Register */
#define MOSI_DOR DORB /* <Master-Out Slave-In> Data Output Register */
#define MOSI_DIR DIRB /* <Master-Out Slave-In> Data Input Register */
#define MOSI_BIT 3    /* <Master-Out Slave-In> Bit */
#define MISO_DDR DDRB /* <Master-In Slave-Out> Data Direction Register */
#define MISO_DOR DORB /* <Master-In Slave-Out> Data Output Register */
#define MISO_DIR DIRB /* <Master-In Slave-Out> Data Input Register */
#define MISO_BIT 4    /* <Master-In Slave-Out> Bit */
#define SCLK_DDR DDRB /* <Serial Clock> Data Direction Register */
#define SCLK_DOR DORB /* <Serial Clock> Data Output Register */
#define SCLK_DIR DIRB /* <Serial Clock> Data Input Register */
#define SCLK_BIT 5    /* <Serial Clock> Bit */
/* IRQ */
#define IRQ_NUMBER 22

/* Registers and associated bit numbers */
/* PORT B */
#define DIRB  _SFR_IO8(0x23) /* Data Input Port B Register */
#define DIRB0 0              /* Data Input Port B Bit 0 */
#define DIRB1 1              /* Data Input Port B Bit 1 */
#define DIRB2 2              /* Data Input Port B Bit 2 */
#define DIRB3 3              /* Data Input Port B Bit 3 */
#define DIRB4 4              /* Data Input Port B Bit 4 */
#define DIRB5 5              /* Data Input Port B Bit 5 */
#define DIRB6 6              /* Data Input Port B Bit 6 */
#define DIRB7 7              /* Data Input Port B Bit 7 */
#define DDRB  _SFR_IO8(0x24) /* Data Direction Port B Register */
#define DDRB0 0              /* Data Direction Port B Bit 0 */
#define DDRB1 1              /* Data Direction Port B Bit 1 */
#define DDRB2 2              /* Data Direction Port B Bit 2 */
#define DDRB3 3              /* Data Direction Port B Bit 3 */
#define DDRB4 4              /* Data Direction Port B Bit 4 */
#define DDRB5 5              /* Data Direction Port B Bit 5 */
#define DDRB6 6              /* Data Direction Port B Bit 6 */
#define DDRB7 7              /* Data Direction Port B Bit 7 */
#define DORB  _SFR_IO8(0x25) /* Data Output Port B Register */
#define DORB0 0              /* Data Output Port B Bit 0 */
#define DORB1 1              /* Data Output Port B Bit 1 */
#define DORB2 2              /* Data Output Port B Bit 2 */
#define DORB3 3              /* Data Output Port B Bit 3 */
#define DORB4 4              /* Data Output Port B Bit 4 */
#define DORB5 5              /* Data Output Port B Bit 5 */
#define DORB6 6              /* Data Output Port B Bit 6 */
#define DORB7 7              /* Data Output Port B Bit 7 */

/* PORT C */
#define DIRC  _SFR_IO8(0x26) /* Data Input Port C Register */
#define DIRC0 0              /* Data Input Port C Bit 0 */
#define DIRC1 1              /* Data Input Port C Bit 1 */
#define DIRC2 2              /* Data Input Port C Bit 2 */
#define DIRC3 3              /* Data Input Port C Bit 3 */
#define DIRC4 4              /* Data Input Port C Bit 4 */
#define DIRC5 5              /* Data Input Port C Bit 5 */
#define DIRC6 6              /* Data Input Port C Bit 6 */
#define DDRC  _SFR_IO8(0x27) /* Data Direction Port C Register */
#define DDRC0 0              /* Data Direction Port C Bit 0 */
#define DDRC1 1              /* Data Direction Port C Bit 1 */
#define DDRC2 2              /* Data Direction Port C Bit 2 */
#define DDRC3 3              /* Data Direction Port C Bit 3 */
#define DDRC4 4              /* Data Direction Port C Bit 4 */
#define DDRC5 5              /* Data Direction Port C Bit 5 */
#define DDRC6 6              /* Data Direction Port C Bit 6 */
#define DORC  _SFR_IO8(0x28) /* Data Output Port C Register */
#define DORC0 0              /* Data Output Port C Bit 0 */
#define DORC1 1              /* Data Output Port C Bit 1 */
#define DORC2 2              /* Data Output Port C Bit 2 */
#define DORC3 3              /* Data Output Port C Bit 3 */
#define DORC4 4              /* Data Output Port C Bit 4 */
#define DORC5 5              /* Data Output Port C Bit 5 */
#define DORC6 6              /* Data Output Port C Bit 6 */

/* PORT D */
#define DIRD  _SFR_IO8(0x29) /* Data Input Port D Register */
#define DIRD0 0              /* Data Input Port D Bit 0 */
#define DIRD1 1              /* Data Input Port D Bit 1 */
#define DIRD2 2              /* Data Input Port D Bit 2 */
#define DIRD3 3              /* Data Input Port D Bit 3 */
#define DIRD4 4              /* Data Input Port D Bit 4 */
#define DIRD5 5              /* Data Input Port D Bit 5 */
#define DIRD6 6              /* Data Input Port D Bit 6 */
#define DIRD7 7              /* Data Input Port D Bit 7 */
#define DDRD  _SFR_IO8(0x2A) /* Data Direction Port D Register */
#define DDRD0 0              /* Data Direction Port D Bit 0 */
#define DDRD1 1              /* Data Direction Port D Bit 1 */
#define DDRD2 2              /* Data Direction Port D Bit 2 */
#define DDRD3 3              /* Data Direction Port D Bit 3 */
#define DDRD4 4              /* Data Direction Port D Bit 4 */
#define DDRD5 5              /* Data Direction Port D Bit 5 */
#define DDRD6 6              /* Data Direction Port D Bit 6 */
#define DDRD7 7              /* Data Direction Port D Bit 7 */
#define DORD  _SFR_IO8(0x2B) /* Data Output Port D Register */
#define DORD0 0              /* Data Output Port D Bit 0 */
#define DORD1 1              /* Data Output Port D Bit 1 */
#define DORD2 2              /* Data Output Port D Bit 2 */
#define DORD3 3              /* Data Output Port D Bit 3 */
#define DORD4 4              /* Data Output Port D Bit 4 */
#define DORD5 5              /* Data Output Port D Bit 5 */
#define DORD6 6              /* Data Output Port D Bit 6 */
#define DORD7 7              /* Data Output Port D Bit 7 */

/* Timer/Counter 0 Interrupt Flag Register */
#define TIFR0 _SFR_IO8(0x35) /* Timer/Counter 0 Interrupt Flag Register */
#define TOV0  0              /* Timer/Counter 0 Overflow Flag */
#define OCF0A 1              /* Timer/Counter 0 Output Compare A Match Flag */
#define OCF0B 2              /* Timer/Counter 0 Output Compare B Match Flag */

/* Timer/Counter 1 Interrupt Flag Register */
#define TIFR1 _SFR_IO8(0x36) /* Timer/Counter 1 Interrupt Flag Register */
#define TOV1  0              /* Timer/Counter 1 Overflow Flag */
#define OCF1A 1              /* Timer/Counter 1 Output Compare A Match Flag */
#define OCF1B 2              /* Timer/Counter 1 Output Compare B Match Flag */
#define ICF1  3              /* Timer/Counter 1 Input Capture Flag */

/* Timer/Counter 2 Interrupt Flag Register */
#define TIFR2 _SFR_IO8(0x37) /* Timer/Counter 2 Interrupt Flag Register */
#define TOV2  0              /* Timer/Counter 2 Overflow Flag */
#define OCF2A 1              /* Timer/Counter 2 Output Compare A Match Flag */
#define OCF2B 2              /* Timer/Counter 2 Output Compare B Match Flag */

/* Pin Change Interrupt Flag Register */
#define PCIFR _SFR_IO8(0x3B) /* Pin Change Interrupt Flag Register */
#define PCIF0 0              /* Pin Change Interrupt Flag 0 */
#define PCIF1 1              /* Pin Change Interrupt Flag 1 */
#define PCIF2 2              /* Pin Change Interrupt Flag 2 */

/* External Interrupt Flag Register */
#define EIFR  _SFR_IO8(0x3C) /* External Interrupt Flag Register */
#define INTF0 0              /* External Interrupt Flag 0 */
#define INTF1 1              /* External Interrupt Flag 0 */

/* External Interrupt Mask Register */
#define EIMSK _SFR_IO8(0x3D) /* External Interrupt Mask Register */
#define INT0  0              /* External Interrupt Request 0 Enable */
#define INT1  1              /* External Interrupt Request 1 Enable */

/* General Purpose I/O Register 0 */
#define GPIOR0 _SFR_IO8(0x3E) /* General Purpose I/O Register 0 */

/* EEPROM Control Register */
#define EECR  _SFR_IO8(0x3F) /* EEPROM Control Register */
#define EERE  0              /* EEPROM Read Enable */
#define EEPE  1              /* EEPROM Write Enable */
#define EEMPE 2              /* EEPROM Master Write Enable */
#define EERIE 3              /* EEPROM Ready Interrupt Enable */
#define EEPM0 4              /* EEPROM Programming Mode Bit 0 */
#define EEPM1 5              /* EEPROM Programming Mode Bit 1 */

/* EEPROM Data Register */
#define EEDR _SFR_IO8(0x40) /* EEPROM Data Register */

/* EEPROM Address Register */
#define EEAR _SFR_IO16(0x41) /* EEPROM Address Register */

/* General Timer/Counter Control Register */
#define GTCCR   _SFR_IO8(0x43) /* General Timer/Counter Control Register */
#define PSRSYNC 0              /* Prescaler Reset Timer/Counter 0 & Timer/Counter 1 */
#define PSRASY  1              /* Prescaler Reset Timer/Counter 2 */
#define TSM     7              /* Timer/Counter Synchronization Mode */

/* Timer/Counter 0 Control Register A */
#define TCCR0A _SFR_IO8(0x44) /* Timer/Counter 0 Control Register A */
#define WGM00  0              /* Waveform Generation Mode Bit 0 */
#define WGM01  1              /* Waveform Generation Mode Bit 1 */
#define COM0B0 4              /* Compare Match Output B Mode Bit 0 */
#define COM0B1 5              /* Compare Match Output B Mode Bit 1 */
#define COM0A0 6              /* Compare Match Output A Mode Bit 0 */
#define COM0A1 7              /* Compare Match Output A Mode Bit 1 */

/* Timer/Counter 0 Control Register B */
#define TCCR0B _SFR_IO8(0x45) /* Timer/Counter 0 Control Register B */
#define CS00   0              /* Clock Select Bit 0 */
#define CS01   1              /* Clock Select Bit 1 */
#define CS02   2              /* Clock Select Bit 1 */
#define WGM02  3              /* Waveform Generation Mode Bit 2 */
#define FOC0B  6              /* Force Output Compare B */
#define FOC0A  7              /* Force Output Compare A */

/* Timer/Counter 0 Register */
#define TCNT0 _SFR_IO8(0x46) /* Timer/Counter 0 Register */

/* Output Compare Register A */
#define OCR0A _SFR_IO8(0x47) /* Output Compare Register A */

/* Output Compare Register B */
#define OCR0B _SFR_IO8(0x48) /* Output Compare Register B */

/* General Purpose I/O Register 1 */
#define GPIOR1 _SFR_IO8(0x4A) /* General Purpose I/O Register 1 */

/* General Purpose I/O Register 2 */
#define GPIOR2 _SFR_IO8(0x4B)  /* General Purpose I/O Register 2 */

/* SPI Control Register */
#define SPCR _SFR_IO8(0x4C) /* SPI Control Register */
#define SPR0 0              /* SPI Clock Rate Select Bit 0 */
#define SPR1 1              /* SPI Clock Rate Select Bit 1 */
#define CPHA 2              /* Clock Phase */
#define CPOL 3              /* Clock Polarity */
#define MSTR 4              /* Master/Slave Select */
#define DORE 5              /* Data Order */
#define SPE  6              /* SPI Enable */
#define SPIE 7              /* SPI Interrupt Enable */

/* SPI Status Register */
#define SPSR  _SFR_IO8(0x4D) /* SPI Status Register */
#define SPI2X 0              /* SPI Double SPI Speed */
#define WCOL  6              /* Write Collision Flag */
#define SPIF  7              /* SPI Interrupt Flag */

/* SPI Data Register */
#define SPDR _SFR_IO8(0x4E)

/* Analog Comparator Control and Status Register */
#define ACSR  _SFR_IO8(0x50) /* Analog Comparator Control and Status Register */
#define ACIS0 0              /* Analog Comparator Interrupt Mode Select Bit 0 */
#define ACIS1 1              /* Analog Comparator Interrupt Mode Select Bit 1 */
#define ACIC  2              /* Analog Comparator Input Capture Enable */
#define ACIE  3              /* Analog Comparator Interrupt Enable */
#define ACI   4              /* Analog Comparator Interrupt Flag */
#define ACO   5              /* Analog Comparator Output */
#define ACBG  6              /* Analog Comparator Bandgap Select */
#define ACD   7              /* Analog Comparator Disable */

/* Sleep Mode Control Register */
#define SMCR _SFR_IO8(0x53) /* Sleep Mode Control Register */
#define SE   0              /* Sleep Enable */
#define SM0  1              /* Sleep Mode Select Bit 0 */
#define SM1  2              /* Sleep Mode Select Bit 1 */
#define SM2  3              /* Sleep Mode Select Bit 2 */

/* MCU Status Register */
#define MCUSR _SFR_IO8(0x54) /* MCU Status Register */
#define PORF  0              /* Power-on Reset Flag */
#define EXTRF 1              /* External Reset Flag */
#define BORF  2              /* Brown-out Reset Flag */
#define WDRF  3              /* Watchdog System Reset Flag */

/* MCU Control Register */
#define MCUCR _SFR_IO8(0x55) /* MCU Control Register */
#define IVCE  0              /* Interrupt Vector Change Enable */
#define IVSEL 1              /* Interrupt Vector Select */
#define PUD   4              /* Pull-up Disable */
#define BODSE 5              /* BOD Sleep Enable */
#define BODS  6              /* BOD Sleep */

/* Store Program Memory Control and Status Register */
#define SPMCSR    _SFR_IO8(0x57) /* Store Program Memory Control and Status Register */
#define SELFPRGEN 0              /* Self Programming Enable */
#define PGERS     1              /* Page Erase */
#define PGWRT     2              /* Page Write */
#define BLBSET    3              /* Boot Lock Bit Set */
#define RWWSRE    4              /* Read-While-Write Section Read Enable */
#define RWWSB     6              /* Read-While-Write Section Busy */
#define SPMIE     7              /* SPM Interrupt Enable */

/* Stack Pointer */
#define SP _SFR_IO16(0x5D) /* Stack Pointer */

/* Status Register */
#define SREG _SFR_IO8(0x5F) /* AVR Status Register */

/* Power Reduction Register */
#define PRR      _SFR_IO8(0x64) /* Power Reduction Register */
#define PRADC    0              /* Power Reduction ADC */
#define PRUSART0 1              /* Power Reduction USART0 */
#define PRSPI    2              /* Power Reduction Serial Peripheral Interface */
#define PRTIM1   3              /* Power Reduction Timer/Counter 1 */
#define PRTIM0   5              /* Power Reduction Timer/Counter 0 */
#define PRTIM2   6              /* Power Reduction Timer/Counter 2 */
#define PRTWI    7              /* Power Reduction TWI */

/* Pin Change Interrupt Control Register */
#define PCICR _SFR_IO8(0x68) /* Pin Change Interrupt Control Register */
#define PCIE0  0              /* Pin Change Interrupt Enable 0 (PCINT0 - PCINT7) */
#define PCIE1  1              /* Pin Change Interrupt Enable 1 (PCINT8 - PCINT14) */
#define PCIE2  1              /* Pin Change Interrupt Enable 2 (PCINT16 - PCINT23) */

/* External Interrupt Control Register A */
#define EICRA _SFR_IO8(0x69) 
#define ISC00 0
#define ISC01 1
#define ISC10 2
#define ISC11 3

/* Pin Change Mask Register 0 */
#define PCMSK0 _SFR_IO8(0x6B) /* Pin Change Mask Register 0 */
#define PCINT0 0              /* Pin Change Enable Mask 0 */
#define PCINT1 1              /* Pin Change Enable Mask 1 */
#define PCINT2 2              /* Pin Change Enable Mask 2 */
#define PCINT3 3              /* Pin Change Enable Mask 3 */
#define PCINT4 4              /* Pin Change Enable Mask 4 */
#define PCINT5 5              /* Pin Change Enable Mask 5 */
#define PCINT6 6              /* Pin Change Enable Mask 6 */
#define PCINT7 7              /* Pin Change Enable Mask 7 */

/* Pin Change Mask Register 1 */
#define PCMSK1  _SFR_IO8(0x6C) /* Pin Change Mask Register 1 */
#define PCINT8  0              /* Pin Change Enable Mask 8 */
#define PCINT9  1              /* Pin Change Enable Mask 9 */
#define PCINT10 2              /* Pin Change Enable Mask 10 */
#define PCINT11 3              /* Pin Change Enable Mask 11 */
#define PCINT12 4              /* Pin Change Enable Mask 12 */
#define PCINT13 5              /* Pin Change Enable Mask 13 */
#define PCINT14 6              /* Pin Change Enable Mask 14 */

/* Pin Change Mask Register 2 */
#define PCMSK2  _SFR_IO8(0x6D) /* Pin Change Mask Register 2 */
#define PCINT16 0              /* Pin Change Enable Mask 16 */
#define PCINT17 1              /* Pin Change Enable Mask 17 */
#define PCINT18 2              /* Pin Change Enable Mask 18 */
#define PCINT19 3              /* Pin Change Enable Mask 19 */
#define PCINT20 4              /* Pin Change Enable Mask 20 */
#define PCINT21 5              /* Pin Change Enable Mask 21 */
#define PCINT22 6              /* Pin Change Enable Mask 22 */
#define PCINT23 7              /* Pin Change Enable Mask 23 */

/* Timer/Counter 0 Interrupt Mask Register */
#define TIMSK0 _SFR_IO8(0x6E)
#define TOIE0  0
#define OCIE0A 1
#define OCIE0B 2

/* Timer/Counter 1 Interrupt Mask Register */
#define TIMSK1 _SFR_IO8(0x6F)
#define TOIE1  0
#define OCIE1A 1
#define OCIE1B 2
#define ICIE1  5

/* Timer/Counter 2 Interrupt Mask Register */
#define TIMSK2 _SFR_IO8(0x70)
#define TOIE2  0
#define OCIE2A 1
#define OCIE2B 2

/* ADC Data Register */
#define ADCR _SFR_IO16(0x78) /* ADC Data Register */
#define ADCLR _SFR_IO8(0x78) /* ADC Low Data Register */
#define ADCHR _SFR_IO8(0x79) /* ADC High Data Register */

/* ADC Control and Status Register A */
#define ADCSRA _SFR_IO8(0x7A) /* ADC Control and Status Register A */
#define ADPS0 0               /* ADC Prescaler Select Bit 0 */
#define ADPS1 1               /* ADC Prescaler Select Bit 1 */
#define ADPS2 2               /* ADC Prescaler Select Bit 2 */
#define ADIE  3               /* ADC Interrupt Enable */
#define ADIF  4               /* ADC Interrupt Flag */
#define ADATE 5               /* ADC Auto Trigger Enable */
#define ADSC  6               /* ADC Start Conversion */
#define ADEN  7               /* ADC Enable */

/* ADC Control and Status Register B */
#define ADCSRB _SFR_IO8(0x7B) /* ADC Control and Status Register B */
#define ADTS0 0               /* ADC Auto Trigger Source Bit 0 */
#define ADTS1 1               /* ADC Auto Trigger Source Bit 1 */
#define ADTS2 2               /* ADC Auto Trigger Source Bit 2 */
#define ACME  6               /* Analog Comparator Multiplexer Enable */

/* ADC Multiplexer Selection Register */
#define ADMUX _SFR_IO8(0x7C) /* ADC Multiplexer Selection Register */
#define MUX0  0              /* Analog Channel Selection Bit 0 */
#define MUX1  1              /* Analog Channel Selection Bit 1 */
#define MUX2  2              /* Analog Channel Selection Bit 2 */
#define MUX3  3              /* Analog Channel Selection Bit 3 */
#define ADLAR 5              /* ADC Left Adjust Result */
#define REFS0 6              /* Reference Selection Bit 0 */
#define REFS1 7              /* Reference Selection Bit 1 */

#define TCCR1A _SFR_IO8(0x80)
#define WGM10  0
#define WGM11  1
#define COM1B0 4
#define COM1B1 5
#define COM1A0 6
#define COM1A1 7

#define TCCR1B _SFR_IO8(0x81)
#define CS10   0
#define CS11   1
#define CS12   2
#define WGM12  3
#define WGM13  4
#define ICES1  6
#define ICNC1  7

#define TCCR1C _SFR_IO8(0x82)
#define FOC1B  6
#define FOC1A  7

#define TCNT1 _SFR_IO16(0x84)

#define ICR1 _SFR_IO16(0x86)

#define OCR1A _SFR_IO16(0x88)

#define OCR1B _SFR_IO16(0x8A)

/* Timer/Counter 2 Control Register A */
#define TCCR2A _SFR_IO8(0xB0) /* Timer/Counter 2 Control Register A */
#define WGM20  0              /* Waveform Generation Mode Bit 0 */
#define WGM21  1              /* Waveform Generation Mode Bit 1 */
#define COM2B0 4              /* Compare Match Output B Mode Bit 0 */
#define COM2B1 5              /* Compare Match Output B Mode Bit 1 */
#define COM2A0 6              /* Compare Match Output A Mode Bit 0 */
#define COM2A1 7              /* Compare Match Output A Mode Bit 1 */

/* Timer/Counter 2 Control Register B */
#define TCCR2B _SFR_IO8(0xB1) /* Timer/Counter 2 Control Register B */
#define CS20   0              /* Clock Select Bit 0 */
#define CS21   1              /* Clock Select Bit 1 */
#define CS22   2              /* Clock Select Bit 1 */
#define WGM22  3              /* Waveform Generation Mode Bit 2 */
#define FOC2B  6              /* Force Output Compare B */
#define FOC2A  7              /* Force Output Compare A */

/* Timer/Counter 2 Register */
#define TCNT2 _SFR_IO8(0xB2) /* Timer/Counter 2 Register */

/* Timer/Counter 2 Output Compare Register A */
#define OCR2A _SFR_IO8(0xB3) /* Timer/Counter 2 Output Compare Register A */

/* Timer/Counter 2 Output Compare Register B */
#define OCR2B _SFR_IO8(0xB4) /* Timer/Counter 2 Output Compare Register B */

/* TWI Baudrate Register */
#define TWBR _SFR_IO8(0xB8) /* TWI Baudrate Register */

/* TWI Status Register */
#define TWSR  _SFR_IO8(0xB9) /* TWI Status Register */
#define TWPS0 0              /* TWI Prescaler Bit 0 */
#define TWPS1 1              /* TWI Prescaler Bit 1 */

/* TWI Address Register (in slave mode) */
#define TWAR  _SFR_IO8(0xBA) /* TWI Address Register (in slave mode) */
#define TWGCE 0              /* TWI General Call Recognition Enable Bit */

/* TWI Data Register */
#define TWDR _SFR_IO8(0xBB) /* TWI Data Register */

/* TWI Control Register */
#define TWCR  _SFR_IO8(0xBC) /* TWI Control Register */
#define TWIE  0              /* TWI Interrupt Enable Bit */
#define TWEN  2              /* TWI Enable Bit */
#define TWWC  3              /* TWI Write Collision Flag Bit */
#define TWSTO 4              /* TWI STOP Condition Bit */
#define TWSTA 5              /* TWI START Condition Bit */
#define TWEA  6              /* TWI Enable Acknowledge Bit */
#define TWINT 7              /* TWI Interrupt Flag Bit */

#define TWAMR _SFR_IO8(0xBD) /* TWI Address Mask Register */

/* USART Control and Status Register A */
#define UCSRA _SFR_IO8(0xC0) /* USART Control and Status Register A */
#define MPCM  0              /* Multi-processor Communication Mode Bit */
#define U2X   1              /* Double the USART Transmission Speed Bit */
#define PE    2              /* Parity Error Bit */
#define DOR   3              /* Data OverRun Bit */
#define FE    4              /* Frame Error Bit */
#define UDRE  5              /* USART Data Register Empty Bit */
#define TXC   6              /* USART Transmit Complete Bit */
#define RXC   7              /* USART Receive Complete Bit */

/* USART Control and Status Register B */
#define UCSRB _SFR_IO8(0xC1) /* USART Control and Status Register B */
#define TXB8  0              /* Transmit Data Bit 8 */
#define RXB8  1              /* Receive Data Bit 8 */
#define UCSZ2 2              /* Character Size Bit 2 */
#define TXEN  3              /* Transmitter Enable Bit */
#define RXEN  4              /* Receiver Enable Bit */
#define UDRIE 5              /* USART Data Register Empty Interrupt Enable Bit */
#define TXCIE 6              /* TX Complete Interrupt Enable Bit */
#define RXCIE 7              /* RX Complete Interrupt Enable Bit */

/* USART Control and Status Register C */
#define UCSRC  _SFR_IO8(0xC2) /* USART Control and Status Register C */
#define UCPOL  0              /* Clock Polarity */
#define UCSZ0  1              /* Character Size Bit 0 */
#define UCPHA  1              /* Clock Phase Bit (in MSPI mode) */
#define UCSZ1  2              /* Character Size Bit 1 */
#define UDORD  2              /* Data Order Bit (in MSPI mode) */
#define USBS   3              /* Stop Bit Select Bit */
#define UPM0   4              /* Parity Mode Bit 0 */
#define UPM1   5              /* Parity Mode Bit 1 */
#define UMSEL0 6              /* USART Mode Select Bit 0 */
#define UMSEL1 7              /* USART Mode Select Bit 1 */

/* USART Baud Rate Register */
#define UBRR _SFR_IO16(0xC4) /* USART Baud Rate Register */

/* USART Baud Rate Register Low Byte */
#define UBRRL _SFR_IO8(0xC4) /* USART Baud Rate Register Low Byte */

/* USART Baud Rate Register High Byte */
#define UBRRH _SFR_IO8(0xC5) /* USART Baud Rate Register High Byte */

/* USART Data Register */
#define UDR _SFR_IO8(0xC6) /* USART Data Register */

#define INT0_vect _VECTOR(1)          /* External Interrupt Request 0 */
#define INT1_vect _VECTOR(2)          /* External Interrupt Request 1 */
#define PCINT0_vect _VECTOR(3)        /* Pin Change Interrupt Request 0 */
#define PCINT1_vect _VECTOR(4)        /* Pin Change Interrupt Request 1 */
#define PCINT2_vect _VECTOR(5)        /* Pin Change Interrupt Request 2 */
#define TIMER2_COMPA_vect _VECTOR(7)  /* Timer/Counter2 Compare Match A */
#define TIMER2_COMPB_vect _VECTOR(8)  /* Timer/Counter2 Compare Match B */
#define TIMER2_OVF_vect _VECTOR(9)    /* Timer/Counter2 Overflow */
#define TIMER1_CAPT_vect _VECTOR(10)  /* Timer/Counter1 Capture Event */
#define TIMER1_COMPA_vect _VECTOR(11) /* Timer/Counter1 Compare Match A */
#define TIMER1_COMPB_vect _VECTOR(12) /* Timer/Counter1 Compare Match B */
#define TIMER1_OVF_vect _VECTOR(13)   /* Timer/Counter1 Overflow */
#define TIMER0_COMPA_vect _VECTOR(14) /* TimerCounter0 Compare Match A */
#define TIMER0_COMPB_vect _VECTOR(15) /* TimerCounter0 Compare Match B */
#define TIMER0_OVF_vect _VECTOR(16)   /* Timer/Couner0 Overflow */
#define USART_RX_vect _VECTOR(18)     /* USART Rx */
#define USART_UDRE_vect _VECTOR(19)   /* USART Data Register Empty */
#define ADC_vect _VECTOR(21)          /* ADC Conversion Complete */
#define TWI_vect _VECTOR(25)          /* Two Wire Serial Interface */

#endif

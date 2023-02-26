#ifndef __ATMEGA16A_H__
#define __ATMEGA16A_H__

#ifndef __CORE_H__
#error "Include <Core.h> instead of this file."
#endif

/* General macros */
/* TWI */
#define SCL_DDR DDRC         // <Serial Clock> Data Direction Register
#define SCL_DOR PORTC        // <Serial Clock> Data Output Register
#define SCL_DIR PINC         // <Serial Clock> Data Input Register
#define SCL_IDX ((uint8_t)0) // <Serial Clock> Index
#define SDA_DDR DDRC         // <Serial Data> Data Direction Register
#define SDA_DOR PORTC        // <Serial Data> Data Output Register
#define SDA_DIR PINC         // <Serial Data> Data Input Register
#define SDA_IDX ((uint8_t)1) // <Serial Data> Index
/* SPI */
#define SS_DDR DDRB           // <Slave Select> Data Direction Register
#define SS_DOR PORTB          // <Slave Select> Data Output Register
#define SS_DIR PINB           // <Slave Select> Data Input Register
#define SS_IDX ((uint8_t)4)   // <Slave Select> Index
#define MOSI_DDR DDRB         // <Master-Out Slave-In> Data Direction Register
#define MOSI_DOR PORTB        // <Master-Out Slave-In> Data Output Register
#define MOSI_DIR PINB         // <Master-Out Slave-In> Data Input Register
#define MOSI_IDX ((uint8_t)5) // <Master-Out Slave-In> Index
#define MISO_DDR DDRB         // <Master-In Slave-Out> Data Direction Register
#define MISO_DOR PORTB        // <Master-In Slave-Out> Data Output Register
#define MISO_DIR PINB         // <Master-In Slave-Out> Data Input Register
#define MISO_IDX ((uint8_t)6) // <Master-In Slave-Out> Index
#define SCLK_DDR DDRB         // <Serial Clock> Data Direction Register
#define SCLK_DOR PORTB        // <Serial Clock> Data Output Register
#define SCLK_DIR PINB         // <Serial Clock> Data Input Register
#define SCLK_IDX ((uint8_t)7) // <Serial Clock> Index

/* Registers and associated bit numbers */

#define TWBR  _SFR_IO8(0x20) // Two Wire Baud Rate Register

#define TWSR  _SFR_IO8(0x21) // Two Wire Status Register
#define TWPS0 0              // Two Wire Prescaler Bit 0
#define TWPS1 1              // Two WIre Prescaler Bit 1
#define TWS3  3              // Two Wire Status Bit 3
#define TWS4  4              // Two Wire Status Bit 4
#define TWS5  5              // Two Wire Status Bit 5
#define TWS6  6              // Two Wire Status Bit 6
#define TWS7  7              // Two Wire Status Bit 7

#define TWAR  _SFR_IO8(0x22) // Two Wire (Slave) Address Register
#define TWGCE 0              // Two Wire General Call Recognition Enable Bit
#define TWA0  1              // Two Wire Address Bit 0
#define TWA1  2              // Two Wire Address Bit 1
#define TWA2  3              // Two Wire Address Bit 2
#define TWA3  4              // Two Wire Address Bit 3
#define TWA4  5              // Two Wire Address Bit 4
#define TWA5  6              // Two Wire Address Bit 5
#define TWA6  7              // Two Wire Address Bit 6

#define TWDR  _SFR_IO8(0x23) // Two Wire Data Register

#define UBRRL _SFR_IO8(0x29) // USART Baud Rate Register Low Byte

#define UCSRB _SFR_IO8(0x2A) // USART Control and Status Register B
#define TXB8  0              // Transmit Data Bit 8
#define RXB8  1              // Receive Data Bit 8
#define UCSZ2 2              // Character Size
#define TXEN  3              // Transmitter Enable
#define RXEN  4              // Receiver Enable
#define UDRIE 5              // USART Data Register Empty Interrupt Enable
#define TXCIE 6              // TX Complete Interrupt Enable
#define RXCIE 7              // RX Complete Interrupt Enable

#define UCSRA _SFR_IO8(0x2B) // USART Control and Status Register A
#define MPCM  0              // Multi-processor Communication Mode
#define U2X   1              // Double the USART Transmission Speed
#define PE    2              // Parity Error
#define DOR   3              // Data OverRun
#define FE    4              // Frame Error
#define UDRE  5              // USART Data Register Empty
#define TXC   6              // USART Transmit Complete
#define RXC   7              // USART Receive Complete

#define UDR   _SFR_IO8(0x2C) // USART I/O Data Register

#define PIND  _SFR_IO8(0x30) // Data Input Port D Register
#define PIND0 0              // Data Input Port D Bit 0
#define PIND1 1              // Data Input Port D Bit 1
#define PIND2 2              // Data Input Port D Bit 2
#define PIND3 3              // Data Input Port D Bit 3
#define PIND4 4              // Data Input Port D Bit 4
#define PIND5 5              // Data Input Port D Bit 5
#define PIND6 6              // Data Input Port D Bit 6
#define PIND7 7              // Data Input Port D Bit 7

#define DDRD  _SFR_IO8(0x31) // Data Direction Port D Register
#define DDD0  0              // Data Direction Port D Bit 0
#define DDD1  1              // Data Direction Port D Bit 1
#define DDD2  2              // Data Direction Port D Bit 2
#define DDD3  3              // Data Direction Port D Bit 3
#define DDD4  4              // Data Direction Port D Bit 4
#define DDD5  5              // Data Direction Port D Bit 5
#define DDD6  6              // Data Direction Port D Bit 6
#define DDD7  7              // Data Direction Port D Bit 7

#define PORTD _SFR_IO8(0x32) // Data Output Port D Register
#define PD0   0              // Data Output Port D Bit 0
#define PD1   1              // Data Output Port D Bit 1
#define PD2   2              // Data Output Port D Bit 2
#define PD3   3              // Data Output Port D Bit 3
#define PD4   4              // Data Output Port D Bit 4
#define PD5   5              // Data Output Port D Bit 5
#define PD6   6              // Data Output Port D Bit 6
#define PD7   7              // Data Output Port D Bit 7

#define PINC  _SFR_IO8(0x33) // Data Input Port C Register
#define PINC0 0              // Data Input Port C Bit 0
#define PINC1 1              // Data Input Port C Bit 1
#define PINC2 2              // Data Input Port C Bit 2
#define PINC3 3              // Data Input Port C Bit 3
#define PINC4 4              // Data Input Port C Bit 4
#define PINC5 5              // Data Input Port C Bit 5
#define PINC6 6              // Data Input Port C Bit 6
#define PINC7 7              // Data Input Port C Bit 7

#define DDRC  _SFR_IO8(0x34) // Data Direction Port C Register
#define DDC0  0              // Data Direction Port C Bit 0
#define DDC1  1              // Data Direction Port C Bit 1
#define DDC2  2              // Data Direction Port C Bit 2
#define DDC3  3              // Data Direction Port C Bit 3
#define DDC4  4              // Data Direction Port C Bit 4
#define DDC5  5              // Data Direction Port C Bit 5
#define DDC6  6              // Data Direction Port C Bit 6
#define DDC7  7              // Data Direction Port C Bit 7

#define PORTC  _SFR_IO8(0x35) // Data Output Port C Register
#define PC0    0              // Data Output Port C Bit 0
#define PC1    1              // Data Output Port C Bit 1
#define PC2    2              // Data Output Port C Bit 2
#define PC3    3              // Data Output Port C Bit 3
#define PC4    4              // Data Output Port C Bit 4
#define PC5    5              // Data Output Port C Bit 5
#define PC6    6              // Data Output Port C Bit 6
#define PC7    7              // Data Output Port C Bit 7

#define PINA  _SFR_IO8(0x39) // Data Input Port A Register
#define PINA0 0              // Data Input Port A Bit 0
#define PINA1 1              // Data Input Port A Bit 1
#define PINA2 2              // Data Input Port A Bit 2
#define PINA3 3              // Data Input Port A Bit 3
#define PINA4 4              // Data Input Port A Bit 4
#define PINA5 5              // Data Input Port A Bit 5
#define PINA6 6              // Data Input Port A Bit 6
#define PINA7 7              // Data Input Port A Bit 7

#define DDRA  _SFR_IO8(0x3A) // Data Direction Port A Register
#define DDA0  0              // Data Direction Port A Bit 0
#define DDA1  1              // Data Direction Port A Bit 1
#define DDA2  2              // Data Direction Port A Bit 2
#define DDA3  3              // Data Direction Port A Bit 3
#define DDA4  4              // Data Direction Port A Bit 4
#define DDA5  5              // Data Direction Port A Bit 5
#define DDA6  6              // Data Direction Port A Bit 6
#define DDA7  7              // Data Direction Port A Bit 7

#define PORTA  _SFR_IO8(0x3B) // Data Direction Port A Register
#define PA0    0              // Data Output Port A Bit 0
#define PA1    1              // Data Output Port A Bit 1
#define PA2    2              // Data Output Port A Bit 2
#define PA3    3              // Data Output Port A Bit 3
#define PA4    4              // Data Output Port A Bit 4
#define PA5    5              // Data Output Port A Bit 5
#define PA6    6              // Data Output Port A Bit 6
#define PA7    7              // Data Output Port A Bit 7

#define UCSRC  _SFR_IO8(0x40) // USART Control and Status Register C
#define UCPOL  0              // Clock Polarity
#define UCSZ0  1              // Character Size Bit 0
#define UCSZ1  2              // Character Size Bit 1
#define USBS   3              // Stop Bit Select
#define UPM0   4              // Parity Mode Bit 0
#define UPM1   5              // Parity Mode Bit 1
#define UMSEL  6              // USART Mode Select
#define URSEL  7              // Register Select

#define UBRRH  _SFR_IO8(0x40) // USART Baud Rate Register High Byte
#define URSEL  7              // Register Select

#define OCR1B  _SFR_IO16(0x48) // Output Compare Register 1 B
#define OCR1BL _SFR_IO8(0x48)  // Output Compare Register 1 B Low
#define OCR1BH _SFR_IO8(0x49)  // Output Compare Register 1 B High

#define OCR1A  _SFR_IO16(0x4A) // Output Compare Register 1 A
#define OCR1AL _SFR_IO8(0x4A)  // Output Compare Register 1 A Low
#define OCR1AH _SFR_IO8(0x4B)  // Output Compare Register 1 A High

#define TCNT1  _SFR_IO16(0x4C) // Timer/Counter1 Register
#define TCNT1L _SFR_IO8(0x4C)  // Timer/Counter1 Register Low
#define TCNT1H _SFR_IO8(0x4D)  // Timer/Counter1 Register High

#define TCCR1B  _SFR_IO8(0x4E) // Timer/Counter1 Control Register B
#define CS10    0              // Clock Select Bit 0
#define CS11    1              // Clock Select Bit 1
#define CS12    2              // Clock Select Bit 2
#define WGM12   3              // Waveform Generation Mode Bit 2
#define WGM13   4              // Waveform Generation Mode Bit 3
#define ICES1   6              // Input Capture Edge Select
#define ICNC1   7              // Input Capture Noise Canceler Bit

#define TCCR1A  _SFR_IO8(0x4F) // Timer/Counter1 Control Register A
#define WGM10   0              // Waveform Generation Mode Bit 0
#define WGM11   1              // Waveform Generation Mode Bit 1
#define FOC1B   2              // Force Output Compare for Channel B
#define FOC1A   3              // Force Output Compare for Channel A
#define COM1B0  4              // Compare Output Mode for Channel B Bit 0
#define COM1B1  5              // Compare Output Mode for Channel B Bit 1
#define COM1A0  6              // Compare Output Mode for Channel A Bit 0
#define COM1A1  7              // Compare Output Mode for Channel A Bit 1

#define TWCR  _SFR_IO8(0x56) // Two Wire Control Register
#define TWIE  0              // Two Wire Interrupt Enable Bit
#define TWEN  2              // Two Wire Enable Bit
#define TWWC  3              // Two Wire Write Collision Bit
#define TWSTO 4              // Two Wire Stop Condition Bit
#define TWSTA 5              // Two Wire Start Condition Bit
#define TWEA  6              // Two Wire Enable Acknowledge Bit
#define TWINT 7              // Two Wire Interrupt Flag Bit

#define TIMSK  _SFR_IO8(0x59) // Timer/Counter Interrupt Mask Register
#define TOIE0  0              // Timer/Counter0, Overflow Interrupt Enable Bit
#define OCIE0  1              // Timer/Counter0, Output Compare Match Interrupt Enable Bit
#define TOIE1  2              // Timer/Counter1, Overflow Interrupt Enable
#define OCIE1B 3              // Timer/Counter1, Output Compare B Match Interrupt Enable
#define OCIE1A 4              // Timer/Counter1, Output Compare A Match Interrupt Enable
#define TICIE1 5              // Timer/Counter1, Input Capture Interrupt Enable
#define TOIE2  6              // Timer/Counter2 Overflow Interrupt Enable
#define OCIE2  7              // Timer/Counter2 Output Compare Match Interrupt Enable

#define TIMER1_COMPA_vect _VECTOR(6) // Timer/Counter1 Compare Match A Vector
#define TIMER1_COMPB_vect _VECTOR(7) // Timer/Counter1 Compare Match B Vector
#define USART_RX_vect  _VECTOR(11)   // USART RX Vector
#define USART_UDRE_vect _VECTOR(12)  // USART UDRE Vector

#endif

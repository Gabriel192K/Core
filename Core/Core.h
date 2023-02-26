#ifndef __CORE_H__
#define __CORE_H__

/* Dependecies */
#include <stdlib.h>
#include <stdint.h>

/* Macros */
/* Memory acceess */
#define _SFR_IO8(address) (*(volatile uint8_t*)address)   // Pointer to 8 bit memory location
#define _SFR_IO16(address) (*(volatile uint16_t*)address) // Pointer to 16 bit memory location
/* IO types */
#define INPUT 0
#define OUTPUT 1
#define LOW 0
#define HIGH 1
#define TOGGLE 2

#if defined (__AVR_ATmega328P__)
#include "ATmega328P.h"
#endif

/* Prototypes */
inline void    pinMode     (volatile uint8_t* port, const uint8_t bit, const uint8_t mode) __attribute__((always_inline));
inline void    digitalWrite(volatile uint8_t* port, const uint8_t bit, const uint8_t mode) __attribute__((always_inline));
inline uint8_t digitalRead (volatile uint8_t* port, const uint8_t bit) __attribute__((always_inline));

inline void pinMode(volatile uint8_t* port, const uint8_t bit, const uint8_t mode)
{
    if (port == NULL)
        return;
    switch (mode)
    {
        case INPUT : *port &= ~(1 << bit); break;
        case OUTPUT: *port |=  (1 << bit); break;
        default    : break; 
    }
}

inline void digitalWrite(volatile uint8_t* port, const uint8_t bit, const uint8_t mode)
{
    if (port == NULL)
        return;
    switch (mode)
    {
        case LOW   : *port &= ~(1 << bit); break;
        case HIGH  : *port |=  (1 << bit); break;
        case TOGGLE: *port ^=  (1 << bit); break;
        default    : break;
    }
}

inline uint8_t digitalRead(volatile uint8_t* port, const uint8_t bit)
{
    if (port == NULL)
        return (0);
    return ((*port >> bit) & 1);
}

#endif

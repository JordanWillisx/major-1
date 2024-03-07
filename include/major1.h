// major1.h
#ifndef MAJOR1
#define MAJOR1

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define TRUE 1
#define FALSE 0

uint32_t getUnsignedInt32(const char* prompt);
uint32_t EndianSwap(const uint32_t *value);
uint32_t Parity(const uint32_t *value);
uint32_t RotateRight( const uint32_t *value,  const uint32_t *value2);
uint32_t count_leading_zeroes(const uint32_t *value);

#endif

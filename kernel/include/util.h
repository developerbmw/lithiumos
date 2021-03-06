#ifndef UTIL_H
#define UTIL_H

#include <types.h>

void *memset(void *ptr, int val, size_t num);
void *memsetd(uint32_t *dest, uint32_t val, size_t count);
uint8_t inportb (uint16_t port);
void outportb(uint16_t port, uint8_t data);
char *itoa(int value, char *str, int base);
uint16_t inportw(uint16_t port);
void disable_interrupts(void);
void enable_interrupts(void);
void halt_cpu(void);
uint32_t strcmp(char* string1, char* string2);
void memcpy(void *dest, const void *source, size_t num);
size_t strlen(const char *str);
void strrev(char *str);

#endif

#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char * const format, ...);
int print_int(va_list args);
int print_num(int num);
int print_string(va_list arg);
int print_char(va_list arg);
int getlength(char *str);
int print_decimal(va_list args);
int print_percent(void);

#endif


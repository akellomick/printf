#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int ft_numlen(int n, int base);
char *ft_itoa(int n);
int ft_print_str(char *s);
int ft_print_num(int number);
void ft_check_next(const char *str, int *c_p, va_list app);

#endif

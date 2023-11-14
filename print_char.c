#include "main.h"

/**
 * print_char - outputs a character.
 * @arg: arguments.
 *
 * Return: int.
 */
int print_char(va_list arg)
{
        char c;

        c = va_arg(arg, int);
        _putchar(c);
        return (1);
}


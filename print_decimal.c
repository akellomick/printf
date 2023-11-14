#include "main.h"

/**
 * print_decimal- prints int.
 * @args: arguments.
 *
 * Return: int.
 */
int print_decimal(va_list args)
{
    int num, itr = 0;

    num = va_arg(args, int);

    if (num < 0)
    {
        _putchar('-');
        num = -num;
        itr++;
    }

    itr += print_num(num);

    return itr;
}
~  

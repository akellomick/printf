#include "main.h"

/**
 * print_int - print int
 * @args: argument.
 *
 * Return: count printed.
 */
int print_int(va_list args)
{
    int num = va_arg(args, int);
    int itr = 0;

    if (num < 0)
    {
        _putchar('-');
        num = -num;
        itr++;
    }

    itr += print_num(num);

    return itr;
}
/**
 * print_num - prints a positive integer
 * @n: int
 * Return: int count
 */
int print_num(int num)
{
    int itr = 0;

    if (num / 10 != 0)
        itr += print_num(num / 10);

    _putchar(num % 10 + '0');
    itr++;

    return itr;
}


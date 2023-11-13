#include "main.h"

/**
 * ft_print_num - a func that prints integer numbers.
 *
 * @number: the number to be printed.
 * Return: count of printed numbers
 */


int ft_print_num(int number)
{
	int c;
	char *converted_num;

	c  = 0;
	converted_num = ft_itoa(number);
	c = ft_print_str(converted_num);
	return (c);
}

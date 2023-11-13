#include "main.h"

/**
 * ft_print_str - a func that prints strings
 *
 * @s: the string to be printed
 * Return: the count of printed chars
 */

 int ft_print_str(char *s)
{
	int count;
	int i;

	i = -1;
	count = 0;
	while (s[++i] != '\0')
		count += write(1, s + i, 1);
	return (count);
}

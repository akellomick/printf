#include "main.h"

/**
 * ft_num_len - count the lenght of a number
 *
 * @n: it s length will be counted
 * @base: base 2 or 8 or 16
 * Return: The lenght of the number n
 */


int ft_numlen(int n, int base)
{
	int count;

	count = 0;
	if (n <= 0)
		++count;
	while (n && ++count)
		n /= base;
	return (count);
}

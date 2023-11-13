#include "main.h"

/**
 * ft_itoa - a func that turns a number into characters(string)
 *
 * @n: is the number to be converted to ascii (char/string)
 * Return: the converted version(string/char) of n
 */



char *ft_itoa(int n)
{
	int len;
	char *ret;
	const char *digits = "0123456789";

	len = ft_numlen(n, 10);
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (0);
	ret[len] = 0;
	if (n == 0)
		ret[0] = '0';
	if (n < 0)
		ret[0] = '-';
	while (n)
	{
		if (n > 0)
			ret[--len] = digits[n % 10];
		else
			ret[--len] = digits[n % 10 * -1];
		n /= 10;
	}
	return (ret);
}

#include "main.h"

/**
 * print_string - prints string.
 * @args: argument.
 *
 * Return: the length of the string.
 */
int print_string(va_list args)
{
	char *str;
	int len, itr;

	str = va_arg(args, char*);

	if (str == NULL)
		str = "(nil)";

	len = getlength(str);

	for (itr = 0; itr < len; itr++)
		_putchar(str[itr]);

	return (len);
}

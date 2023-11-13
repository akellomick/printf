#include "main.h"

/**
 * _printf - My own version of printf
 *
 * @format:  character string, it is composed of zero or more specifiers
 * Return: The number of chars printed.
 */

int _printf(const char *format, ...)
{
	int count_printed;//numbre of characters printed
	va_list ap;//variable to work with the stdarg.h macros
	int i;//index to traverse the string format

	count_printed = 0;
	va_start(ap, format);
	i = -1;
	while (format[++i] != '\0')
	{
		if (format[i] == '%')
		{
			ft_check_next(format + i + 1, &count_printed, ap);
			i++;
		}
		else
			count_printed += write(1, format +i, 1);
	}
	va_end(ap);
	return (count_printed);
}

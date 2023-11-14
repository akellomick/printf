#include "main.h"

/**
 * _printf - selects format to print.
 * @format: character string.
 *
 * Return: str len.
 */
int _printf(const char * const format, ...)
{
	va_list list;
	int itr = 0, len = 0;

	va_start(list, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[itr] != '\0')
	{
		if (format[itr] == '%')
		{
			itr++;

			switch (format[itr])
			{
				case 'c':
					len += print_char(list);
					break;
				case 'i':
					len += print_int(list);
					break;
				case 's':
					len += print_string(list);
					break;
				case '%':
					len += print_percent();
					break;
				case 'd':
					len += print_decimal(list);
					break;
				default:
					_putchar('%');
					_putchar(format[itr]);
					len += 2;
					break;
			}
		}
		else
		{
			_putchar(format[itr]);
			len++;
		}
		itr++;
	}
	va_end(list);
	return (len);
}

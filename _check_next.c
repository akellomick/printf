#include "main.h"

/**
 * ft_check_next: a func that checks what is the next character.
 *
 * @str: the format string in _printf
 * @cp: the count of printed chars
 * @app: a variable to work  with stdargs.h macros
 * Return: Nothing
 */ 

void ft_check_next(const char *str, int *c_p, va_list app)
{
	int c;

	c  = 0;
	if (*str == '%')
		*c_p += write(1, str, 1);
	else if (*str == 'c')
	{
		c = va_arg(app, int);
		*c_p += write(1, &c, 1);
	}
	else if (*str == 's')
		*c_p += ft_print_str(va_arg(app, char *));
	else if (*str == 'd' || *str == 'i')
		*c_p += ft_print_num(va_arg(app, int));
}

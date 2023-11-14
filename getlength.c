#include "main.h"

/**
 * getlength- calculates length of string. copy of _strlen.
 * @str: string
 *
 * Return: int(count)
 */
int getlength(char *str)
{
	int count;

	for (count = 0; str[count] != 0; count++)
		;

	return (count);
}

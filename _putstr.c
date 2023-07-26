#include "main.h"

/**
 * _putstr - printing a string.
 * @str: string to print.
 *
 * Return: ....
*/

int	_putstr(char *str)
{
	int	len;

	len = 0;
	if (!str)
		str = "(null)";
	while (*str)
		len += write(1, str++, 1);
	return (len);
}

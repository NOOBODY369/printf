#include "main.h"

/**
 * _putstr - printing a string.
 * @str: string to print.
 * @len: lenth.
 *
 * Return: void.
*/

void	_putstr(char *str, int *len)
{
	int	i;

	i = 0;
	if (!str)
	{
		*len += write(1, "(null)", 6);
		return;
	}
	while (str[i] != '\0')
	{
		my_printer(str[i], len);
		i++;
	}
}

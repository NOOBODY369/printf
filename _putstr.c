#include "main.h"

/**
 * _putstr - printing a string.
 * @str: string to print.
 *
 * Return: void.
*/

void	_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return;
	}
	while (str[i] != '\0')
	{
		my_printer(str[i]);
		i++;
	}
}

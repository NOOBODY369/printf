#include "main.h"

/**
 * _putd - function that prints the decimal representation
 * of an unsigned integer.
 * @nb: number to print.
 * @len: lenth.
 *
 * Return: always 0.
*/

unsigned int	_putd(unsigned int nb, int *len)
{
	if (nb <= 9)
		my_printer(nb + '0');
	else
	{

		_putd(nb / 10, len);

		_putd(nb % 10, len);
	}
	return (0);
}

#include "main.h"

/**
 * _putnbr - printing numbers.
 * @nb: number to print.
 * @len: lenth.
 *
 * Return: always 0.
*/

int	_putnbr(int nb, int *len)
{
	long	c;

	c = nb;
	if (c < 0)
	{
		c *= -1;
		my_printer('-');
	}
	if (c < 10)
	{
		my_printer(c + '0');
	}
	else
	{
		_putnbr(c / 10, len);
		_putnbr(c % 10, len);
	}
	return (0);
}

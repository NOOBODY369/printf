#include "main.h"

/**
 * _putnbr - printing numbers.
 * @nb: number to print.
 *
 * Return: always 0.
*/

int	_putnbr(int nb)
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
		_putnbr(c / 10);
		_putnbr(c % 10);
	}
	return (0);
}

#include "main.h"
/**
 * _putlowhex - function that prints the hexadecimal representation
 * of an unsigned integer nbr in a low-case format.
 * @nbr: number to print.
 *
 * Return: always 0.
*/

unsigned int	_putlowhex(unsigned int nbr)
{
	char	*s;

	s = "0123456789abcdef";
	if (nbr < 16)
	{
		my_printer(s[nbr]);
	}
	else
	{
		_putlowhex(nbr / 16);
		_putlowhex(nbr % 16);
	}
	return (0);
}

/**
 * _putuphex - function that prints the hexadecimal representation
 * of an unsigned integer nbr in a upper-case format.
 * @nbr: number to print.
 *
 * Return: always 0.
*/

unsigned int	_putuphex(unsigned int nbr)
{
	char	*str;

	str = "0123456789ABCDEF";
	if (nbr < 16)
	{
		my_printer(str[nbr]);
	}
	else
	{
		_putuphex(nbr / 16);
		_putuphex(nbr % 16);
	}
	return (0);
}

/**
 * _putaddr - function that prints the hexadecimal representation
 * of an unsigned long integer.
 * @nbr: number to print.
 *
 * Return: always 0.
*/

unsigned long	_putaddr(unsigned long nbr)
{
	char	*s;

	s = "0123456789abcdef";
	if (nbr < 16)
	{
		my_printer(s[nbr]);
	}
	else
	{
		_putaddr(nbr / 16);
		_putaddr(nbr % 16);
	}
	return (0);
}

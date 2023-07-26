#include "main.h"
/**
 * _putlowhex - function that prints the hexadecimal representation
 * of an unsigned integer nbr in a low-case format.
 * @nbr: number to print.
 * @len: lenth.
 *
 * Return: always 0.
*/

unsigned int	_putlowhex(unsigned int nbr, int *len)
{
	char	*s;

	s = "0123456789abcdef";
	if (nbr < 16)
	{
		my_printer(s[nbr], len);
	}
	else
	{
		_putlowhex(nbr / 16, len);
		_putlowhex(nbr % 16, len);
	}
	return (0);
}

/**
 * _putuphex - function that prints the hexadecimal representation
 * of an unsigned integer nbr in a upper-case format.
 * @nbr: number to print.
 * @len: lenth.
 *
 * Return: always 0.
*/

unsigned int	_putuphex(unsigned int nbr, int *len)
{
	char	*str;

	str = "0123456789ABCDEF";
	if (nbr < 16)
	{
		my_printer(str[nbr], len);
	}
	else
	{
		_putuphex(nbr / 16, len);
		_putuphex(nbr % 16, len);
	}
	return (0);
}

/**
 * _putaddr - function that prints the hexadecimal representation
 * of an unsigned long integer.
 * @nbr: number to print.
 * @len: lenth.
 *
 * Return: always 0.
*/

unsigned long	_putaddr(unsigned long nbr, int *len)
{
	char	*s;

	s = "0123456789abcdef";
	if (nbr < 16)
	{
		my_printer(s[nbr], len);
	}
	else
	{
		_putaddr(nbr / 16, len);
		_putaddr(nbr % 16, len);
	}
	return (0);
}

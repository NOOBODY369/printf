#include "main.h"

/**
 * _check - function that accepts a variable number of arguments.
 * @s: string to check.
 * @valist: The variable argument list obtained from va_start.
 * @len: lenth.
 * @i: The index at which to look for the format specifier
 * character in the format
 *
 * Return: void.
*/

void	_check(char *s, va_list valist, int *len, int i)
{
	if (s[i] == 'x')
		_putlowhex(va_arg(valist, unsigned int), len);
	if (s[i] == 'X')
		_putuphex(va_arg(valist, unsigned int), len);
	if (s[i] == 'i' || s[i] == 'd')
		_putnbr(va_arg(valist, int), len);
	if (s[i] == 's')
		_putstr(va_arg(valist, char *), len);
	if (s[i] == 'u')
		_putd(va_arg(valist, unsigned int), len);
	if (s[i] == 'c')
		my_printer(va_arg(valist, int), len);
	if (s[i] == '%')
		my_printer('%', len);
	if (s[i] == 'p')
	{
		write(1, "0x", 2);
		(*len)++;
		(*len)++;
		_putaddr(va_arg(valist, unsigned long int), len);
	}
}

/**
 * _printf - function that produces output according to a format.
 * @format: is a character string.
 *
 * Return:  the number of characters printed.
*/

int	_printf(const char *format, ...)
{
	int		i;
	va_list	valist;
	int		len;

	i = 0;
	len = 0;
	va_start(valist, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			_check((char *)format[i], valist, &len, i);
			i++;
		}
		else
			my_printer(format[i], &len);
		i++;
	}
	va_end(valist);
	return (len);
}

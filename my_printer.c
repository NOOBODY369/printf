#include "main.h"

/**
 * my_printer - printing.
 * @c: character to print.
 *
 * Return: ...
*/

void	my_printer(char c)
{
	int	len;

	len = write(1, &c, 1);
	return (len);
}

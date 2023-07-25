#include "main.h"

/**
 * my_printer - printing.
 * @c: character to print.
 * @len: lenth.
 *
 * Return: void.
*/

void	my_printer(char c, int *len)
{
	*len += write(1, &c, 1);
}

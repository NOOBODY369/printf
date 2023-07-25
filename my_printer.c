#include "main.h"

/**
 * my_printer - printing.
 * @c: character to print.
 *
 * Return: void.
*/

void	my_printer(char c)
{
	write(1, &c, 1);
}

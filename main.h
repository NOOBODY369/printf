#ifndef MAIN_H
# define MAIN_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

void			my_printer(char c);
unsigned int	_putlowhex(unsigned int nbr, int *len);
unsigned int	_putuphex(unsigned int nbr, int *len);
unsigned int	_putd(unsigned int nb, int *len);
int				_putnbr(int nb, int *len);
int			_putstr(char *str);
unsigned long	_putaddr(unsigned long nbr, int *len);
void			_check(char *s, va_list valist, int *len, int i);
int				_printf(const char *format, ...);
#endif

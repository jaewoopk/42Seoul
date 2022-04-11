#include "ft_printf.h"

void	ft_putnbr_uint(unsigned int n);

void	ft_putnbr_uint(unsigned int n)
{
	char		ch;

	if (n < 10)
	{
		ch = '0' + n;
		write (1, &ch, 1);
	}
	else
	{
		ft_putnbr_uint(n / 10);
		ft_putnbr_uint(n % 10);
	}
}

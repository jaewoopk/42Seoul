#include "ft_printf.h"

void	ft_putnbr(long long n);

void	ft_putnbr(long long n)
{
	char		ch;

	if (n < 0)
	{
		write (1, "-", 1);
		ft_putnbr(-n);
	}
	else if (n < 10)
	{
		ch = '0' + n;
		write (1, &ch, 1);
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

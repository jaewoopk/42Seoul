#include "ft_printf.h"

void	ft_putnbr_int(int n);

void	ft_putnbr_int(int n)
{
	char		ch;

	if (n == -2147483648)
		write (1, "-2147483648", 11);
	else if (n < 0)
	{
		write (1, "-", 1);
		ft_putnbr_int(-n);
	}
	else if (n < 10)
	{
		ch = '0' + n;
		write (1, &ch, 1);
	}
	else
	{
		ft_putnbr_int(n / 10);
		ft_putnbr_int(n % 10);
	}
}

#include "ft_printf.h"

int	ft_putnbr(long long n);

int	ft_putnbr(long long n)
{
	char		ch;
	static int	result;

	result = 0;
	if (n < 0)
	{
		write (1, "-", 1);
		ft_putnbr(-n);
	}
	else if (n < 10)
	{
		ch = '0' + n;
		write (1, &ch, 1);
		result++;
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	return (result);
}

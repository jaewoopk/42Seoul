#include "ft_printf.h"

int	ft_putnbr_int(int n);

int	ft_putnbr_int(int n)
{
	char		ch;
	static int	result;

	if (n == -2147483648)
	{
		write (1, "-2147483648", 11);
		result += 11;
	}
	else if (n < 0)
	{
		write (1, "-", 1);
		ft_putnbr_int(-n);
		result++;
	}
	else if (n < 10)
	{
		ch = '0' + n;
		write (1, &ch, 1);
		result++;
	}
	else
	{
		ft_putnbr_int(n / 10);
		ft_putnbr_int(n % 10);
	}
	return (result);
}

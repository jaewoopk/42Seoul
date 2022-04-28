#include "ft_printf.h"

int	ft_putnbr_uint(unsigned int n);

int	ft_putnbr_uint(unsigned int n)
{
	char		ch;
	static int	result;

	if (n < 10)
	{
		ch = '0' + n;
		write (1, &ch, 1);
		result++;
	}
	else
	{
		ft_putnbr_uint(n / 10);
		ft_putnbr_uint(n % 10);
	}
	return (result);
}

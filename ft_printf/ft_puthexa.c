#include "ft_printf.h"

int	ft_puthexa(unsigned int n);

int	ft_puthexa(unsigned int n)
{
	char		ch;
	static int	result;

	if (n < 16)
	{
		ch = '0' + n;
		if (n >= 10)
			ch = 'a' + n - 10;
		write (1, &ch, 1);
		result++;
	}
	else
	{
		ft_puthexa(n / 16);
		ft_puthexa(n % 16);
	}
	return (result);
}

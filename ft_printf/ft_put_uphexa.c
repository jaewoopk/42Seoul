#include "ft_printf.h"

int	ft_put_uphexa(unsigned int n);

int	ft_put_uphexa(unsigned int n)
{
	char		ch;
	static int	result;

	if (n < 16)
	{
		ch = '0' + n;
		if (n >= 10)
			ch = 'A' + n - 10;
		write (1, &ch, 1);
		result++;
	}
	else
	{
		ft_put_uphexa(n / 16);
		ft_put_uphexa(n % 16);
	}
	return (result);
}

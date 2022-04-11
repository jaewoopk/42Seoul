#include "ft_printf.h"

void	ft_put_uphexa(long long n);

void	ft_put_uphexa(long long n)
{
	char		ch;

	if (n < 0)
	{
		write (1, "-", 1);
		ft_put_uphexa(-n);
	}
	else if (n < 16)
	{
		ch = '0' + n;
		if (n >= 10)
			ch = 'A' + n - 10;
		write (1, &ch, 1);
	}
	else
	{
		ft_put_uphexa(n / 16);
		ft_put_uphexa(n % 16);
	}
}

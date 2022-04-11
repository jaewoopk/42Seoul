#include "ft_printf.h"

void	ft_puthexa(long long n);

void	ft_puthexa(long long n)
{
	char		ch;

	if (n < 0)
	{
		write (1, "-", 1);
		ft_puthexa(-n);
	}
	else if (n < 16)
	{
		ch = '0' + n;
		if (n >= 10)
			ch = 'a' + n - 10;
		write (1, &ch, 1);
	}
	else
	{
		ft_puthexa(n / 16);
		ft_puthexa(n % 16);
	}
}

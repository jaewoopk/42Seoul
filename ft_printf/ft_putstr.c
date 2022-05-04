#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int		i;

	i = 0;
	if (!str)
	{
		write (1, "(null)", 6);
		i += 6;
	}
	else
	{
		while (*str)
		{
			write (1, str, 1);
			str++;
			i++;
		}
	}
	return (i);
}

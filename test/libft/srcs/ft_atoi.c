#include "libft.h"

int		ft_atoi(const char *str);

int		ft_atoi(const char *str)
{
	long long		sign;
	long long		n;
	int				i;

	sign = 1;
	n = 0;
	i = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		n *= 10;
		n += (*str - '0');
		str++;
		i++;
	}
	if (i >= 19 && sign == -1)
		return (0);
	else if (i >= 19)
		return (-1);
	return (n * sign);
}

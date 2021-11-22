#include "libft.h"

int		ft_atoi(const char *str);

int		ft_atoi(const char *str)
{
	long long			sign;
	long long			n;

	sign = 1;
	n = 0;
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
	}
	return (n * sign);
}

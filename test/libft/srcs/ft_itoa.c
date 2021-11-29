#include "libft.h"

size_t	ft_ilen(int n);
char	*ft_min_n(int n);
char	*ft_minus_n(int n);
char	*ft_itoa(int n);

size_t	ft_ilen(int n)
{
	size_t		len;

	len = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_min_n(int n)
{
	char		*tmp_n;

	if (!(tmp_n = (char *)malloc(sizeof(char) * (ft_ilen(-n) + 2))))
		return (0);
	tmp_n[0] = '-';
	tmp_n[1] = '2';
	tmp_n[2] = '1';
	tmp_n[3] = '4';
	tmp_n[4] = '7';
	tmp_n[5] = '4';
	tmp_n[6] = '8';
	tmp_n[7] = '3';
	tmp_n[8] = '6';
	tmp_n[9] = '4';
	tmp_n[10] = '8';
	tmp_n[11] = '\0';
	return (tmp_n);
}

char	*ft_minus_n(int n)
{
	size_t		count;
	size_t		i;
	int			minus_n;
	char		*tmp_n;

	minus_n = -n;
	count = ft_ilen(minus_n);
	if (!(tmp_n = (char *)malloc(sizeof(char) * (count + 2))))
		return (0);
	i = count;
	while (i)
	{
		tmp_n[i] = '0' + (minus_n % 10);
		minus_n /= 10;
		i--;
	}
	tmp_n[0] = '-';
	tmp_n[count + 1] = '\0';
	return (tmp_n);
}

char	*ft_itoa(int n)
{
	size_t		count;
	int			i;
	char		*tmp_n;

	if (n < 0)
	{
		if (n == -2147483648)
			tmp_n = ft_min_n(n);
		else
			tmp_n = ft_minus_n(n);
	}
	else
	{
		count = ft_ilen(n);
		if (!(tmp_n = (char *)malloc(sizeof(char) * (count + 1))))
			return (0);
		i = count - 1;
		while (i > -1)
		{
			tmp_n[i] = '0' + (n % 10);
			n /= 10;
			i--;
		}
		tmp_n[count] = '\0';
	}
	return (tmp_n);
}

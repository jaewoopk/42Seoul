#include "libft.h"

char	*ft_strrchr(const char *s, int c);

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i])
		i++;
	while (0 <= i)
	{
		if (s[i] == c)
			return ((char *)(s + i));
		i--;
	}
	return ((char *)0);
}

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n);

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	char		*tmp_s;
	char		tmp_c;

	tmp_s = (char *)s;
	tmp_c = (char)c;
	i = 0;
	while (n && tmp_s[i])
	{
		if (tmp_s[i] == c)
			return ((void *)(s + i));
		i++;
		n--;
	}
	return (0);
}

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*tmp;

	if (s == 0)
		return (0);
	if (!(tmp = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	if (start < ft_strlen(s))
		ft_memmove(tmp, s + start, len);
	else
	{
		tmp[0] = '\0';
		return (tmp);
	}
	tmp[len] = '\0';
	return (tmp);
}

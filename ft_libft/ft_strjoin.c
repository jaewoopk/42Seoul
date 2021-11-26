#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;
	size_t	len;

	if (s1 == 0 || s2 == 0)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(tmp = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	ft_memmove(tmp, s1, ft_strlen(s1) + 1);
	ft_strlcat(tmp, s2, len + 1);
	tmp[len + 1] = '\0';
	return (tmp);
}

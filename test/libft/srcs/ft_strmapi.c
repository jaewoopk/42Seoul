#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t		i;
	size_t		len;
	char		*tmp_s;

	i = 0;
	if (s == 0 || f == 0)
		return (0);
	len = ft_strlen(s);
	if (!(tmp_s = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	while (i < len)
	{
		tmp_s[i] = f(i, s[i]);
		i++;
	}
	tmp_s[i] = '\0';
	return (tmp_s);
}

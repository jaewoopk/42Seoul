#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*tmp;
	unsigned int	s_len;

	s_len = (unsigned int)ft_strlen(s);
	if (s == 0)
		return (0);
	if (start >= s_len)
		return (ft_strdup(""));
	if ((unsigned int)len > s_len)
		tmp = (char *)malloc(sizeof(char) * (s_len - start + 1));
	else
		tmp = (char *)malloc(sizeof(char) * (len + 1));
	if (!tmp)
		return (0);
	ft_strlcpy(tmp, s + start, len + 1);
	return (tmp);
}

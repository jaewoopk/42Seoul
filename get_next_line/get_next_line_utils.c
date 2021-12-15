#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t		i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t		i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[i] && i + 1 < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		j;
	size_t		dst_len;
	size_t		src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = dst_len;
	j = 0;
	if (dst_len > dstsize)
		return (dstsize + src_len);
	while (i + 1 < dstsize && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;
	size_t	len;

	if (s1 == 0 || s2 == 0)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	tmp = (char *)malloc(sizeof(char) * (len + 1));
	if (!tmp)
		return (0);
	ft_strlcpy(tmp, s1, ft_strlen(s1) + 1);
	ft_strlcat(tmp, s2, len + 1);
	tmp[len] = '\0';
	return (tmp);
}

char	*ft_strdup(const char *s1)
{
	size_t		i;
	char		*tmp;

	i = 0;
	tmp = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (tmp == 0)
		return (0);
	while (*s1)
	{
		tmp[i] = *s1;
		s1++;
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}

#include "libft.h"

char	*ft_checkblank1(char *tmp_s1, char const *set);
size_t	ft_checkblank2(char *tmp_s1, char const *set);
char	*ft_strtrim(char const *s1, char const *set);

char	*ft_checkblank1(char *tmp_s1, char const *set)
{
	size_t		i;

	i = 0;
	while (*tmp_s1)
	{
		i = 0;
		while (set[i])
		{
			if (*tmp_s1 == set[i])
				break ;
			i++;
		}
		if (ft_strlen(set) == i)
			break ;
		tmp_s1++;
	}
	return (tmp_s1);
}

size_t	ft_checkblank2(char *tmp_s1, char const *set)
{
	size_t		len;
	size_t		i;

	len = ft_strlen(tmp_s1);
	while (tmp_s1[--len])
	{
		i = 0;
		while (set[i])
		{
			if (tmp_s1[len] == set[i])
				break ;
			i++;
		}
		if (ft_strlen(set) == i)
			break ;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*tmp;
	char		*tmp_s1;
	size_t		len;

	if (s1 == 0)
		return (0);
	if (set == 0)
		return (ft_strdup(""));
	tmp_s1 = ft_checkblank1((char *)s1, set);
	if (*tmp_s1 == '\0')
		return (ft_strdup(""));
	len = ft_checkblank2(tmp_s1, set);
	tmp = (char *)malloc(sizeof(char) * (len + 2));
	if (!tmp)
		return (0);
	ft_memmove(tmp, tmp_s1, len + 1);
	tmp[len + 1] = '\0';
	return (tmp);
}

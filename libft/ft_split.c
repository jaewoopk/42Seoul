#include "libft.h"

size_t	ft_wordlen(char *s, char c);
size_t	ft_wordcount(char const *s, char c);
char	*ft_find_first(char	*s, char c);
char	**ft_split(char const *s, char c);

size_t	ft_wordlen(char *s, char c)
{
	size_t		len;

	len = 0;
	while (*s)
	{
		if (*s != c)
			len++;
		else
			break ;
		s++;
	}
	return (len);
}

size_t	ft_wordcount(char const *s, char c)
{
	size_t		count;
	size_t		check;

	check = 0;
	count = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
			break ;
	}
	while (*s)
	{
		if (*s != c && check == 0)
		{
			count++;
			check = 1;
		}
		else if (*s == c)
			check = 0;
		s++;
	}
	return (count);
}

char	*ft_find_first(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			s++;
		else
			break ;
	}
	return (s);
}

char	**ft_split(char const *s, char c)
{
	char		**tmp;
	char		*tmp_s;
	size_t		i;
	size_t		len;

	if (s == 0)
		return (0);
	i = -1;
	len = 0;
	tmp = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!tmp)
		return (0);
	tmp_s = (char *)s;
	while (++i < ft_wordcount(s, c))
	{
		tmp_s = ft_find_first(tmp_s, c);
		len = ft_wordlen(tmp_s, c);
		tmp[i] = (char *)malloc(sizeof(char *) * (len + 1));
		if (!tmp[i])
			return (0);
		ft_memmove(tmp[i], tmp_s, len + 1);
		tmp[i][len] = '\0';
		tmp_s += len;
	}
	tmp[ft_wordcount(s, c)] = 0;
	return (tmp);
}

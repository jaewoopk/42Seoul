char	*ft_strrchr(const char *s, int c);

char	*ft_strrchr(const char *s, int c)
{
	while (*s)
		s++;
	while (*(--s))
	{
		if (*s == c)
			return (s);
	}
	return (0);
}

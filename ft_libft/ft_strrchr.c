char	*ft_strrchr(const char *s, int c);

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	i--;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)(s + i));
		i--;
	}
	return (0);
}

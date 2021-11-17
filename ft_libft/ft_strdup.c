char	*ft_strdup(const char *s1);

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

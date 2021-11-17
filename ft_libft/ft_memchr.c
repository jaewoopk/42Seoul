void	*ft_memchr(const void *s, int c, size_t n);

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (*s && n)
	{
		if (*s == c)
			return (s);
		s++;
		n--;
	}
	return (0);
}

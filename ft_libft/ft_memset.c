void	*ft_memset(void *b, int c, size_t len);

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	void	*tmp;

	i = 0;
	tmp = b;
	while (i < len)
	{
		*b = c;
		b++;
		i += sizeof(c);
	}
	return (tmp);
}

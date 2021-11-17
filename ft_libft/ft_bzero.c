void	ft_bzero(void *s, size_t n);

void	ft_bzero(void *s, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

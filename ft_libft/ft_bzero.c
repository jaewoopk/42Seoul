void	ft_bzero(void *ptr, unsigned int num);

void	ft_bzero(void *ptr, unsigned int num)
{
	unsigned int		i;

	i = 0;
	while (i < num)
	{
		ptr[i] = 0;
		i++;
	}
}

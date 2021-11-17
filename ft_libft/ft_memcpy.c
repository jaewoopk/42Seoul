void	*ft_memcpy(void *dest, const void *src, unsigned int num);

void	*ft_memcpy(void *dest, const void *src, unsigned int num)
{
	unsigned int		i;

	i = 0;
	num /= sizeof(*src);
	while (i < num)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

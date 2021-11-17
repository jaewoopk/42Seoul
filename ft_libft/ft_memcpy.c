void	*ft_memcpy(void *dst, const void *src, size_t n);

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;

	i = 0;
	n /= sizeof(*src);
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}

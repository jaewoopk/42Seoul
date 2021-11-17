void	*ft_memmove(void *dst, const void *src, size_t len);

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;

	i = 0;
	len /= sizeof(*src);
	if (dst < src)
	{
		while (i < len)
		{
			dst[i] = src[i];
			i++;
		}
	}
	else
	{
		len--;
		while (-1 < len)
		{
			dst[len] = src[len];
			len--;
		}
	}
	return (dst);
}

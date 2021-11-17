void	*ft_memmove(void *dest, const void *src, unsigned int num);

void	*ft_memmove(void *dest, const void *src, unsigned int num)
{
	unsigned int		i;

	i = 0;
	num /= sizeof(*src);
	if (dest < src)
	{
		while (i < num)
		{
			dest[i] = src[i];
			i++;
		}
	}
	else
	{
		num--;
		while (-1 < num)
		{
			dest[num] = src[num];
			num--;
		}
	}
	return (dest);
}

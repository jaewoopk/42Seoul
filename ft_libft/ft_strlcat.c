size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	if (ft_strlen(dst) <= dstsize)
		return (ft_strlen(dst) + ft_strlen(src));
	while (dst[i])
		i++;
	while (i < dstsize && i < (ft_strlen(dst) + ft_strlen(src)))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len);

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*tmp_dst;
	unsigned char		*tmp_src;

	i = 0;
	tmp_dst = (unsigned char *)dst;
	tmp_src = (unsigned char *)src;
	if (len == 0 || (dst == (void *)0 && src == (const void *)0))
		return (dst);
	if (tmp_dst < tmp_src)
	{
		while (i < len)
		{
			tmp_dst[i] = tmp_src[i];
			i++;
		}
	}
	else
	{
		while (i < len)
		{
			tmp_dst[len - i - 1] = tmp_src[len - i - 1];
			i++;
		}
	}
	return (dst);
}

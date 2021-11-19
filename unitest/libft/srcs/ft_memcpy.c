#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n);

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*tmp_dst;
	unsigned char		*tmp_src;

	tmp_dst = (unsigned char *)dst;
	tmp_src = (unsigned char *)src;
	i = 0;
	while ((tmp_dst[i] || tmp_src[i]) && i < n)
	{
		tmp_dst[i] = tmp_src[i];
		i++;
	}
	if (i < n)
		tmp_dst[i] = '\0';
	return (tmp_dst);
}

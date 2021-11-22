#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len);

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*tmp_dst;
	char		*tmp_src;
	char		tmp[len + 1];

	i = 0;
	if (len == 0)
		return (dst);
	tmp_dst = (char *)dst;
	tmp_src = (char *)src;
	while (i < len)
	{
		tmp[i] = tmp_src[i];
		i++;
	}
	if (i < len)
	{
		tmp[i] = '\0';
		i++;
	}
	i = 0;
	while (i < len)
	{
		tmp_dst[i] = tmp[i];
		i++;
	}
	if (i < len)
	{
		tmp_dst[i] = '\0';
		i++;
	}
	return (dst);
}

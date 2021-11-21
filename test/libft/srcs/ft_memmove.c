#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len);

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*tmp_dst;
	char		*tmp_src;
	char		tmp[len];
	i = 0;

	if (len == 0)
		return (dst);
	tmp_dst = (char *)dst;
	tmp_src = (char *)src;
	while (i < len && tmp_src[i])
	{
		tmp[i] = tmp_src[i];
		i++;
	}
	if (i == ft_strlen(src))
		tmp[i] = '\0';
	i = 0;
	while (i < len && tmp[i])
	{
		tmp_dst[i] = tmp[i];
		i++;
	}
	if (i == ft_strlen(src))
		tmp_dst[i] = '\0';
	return (dst);
}

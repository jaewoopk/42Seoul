/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewoopk000@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:20:07 by jaewopar          #+#    #+#             */
/*   Updated: 2022/05/12 16:10:00 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_strlen(const char *s)
{
	int		i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s1)
{
	int			i;
	char		*tmp;

	i = 0;
	tmp = (char *)malloc(sizeof(char) * (ft_strlen(s1)));
	if (tmp == 0)
		return (0);
	while (*s1 && *s1 != '\n')
	{
		tmp[i] = *s1;
		s1++;
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}

int	ft_strlcat(char *dst, const char *src, int dstsize)
{
	int		i;
	int		j;
	int		dst_len;
	int		src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = dst_len;
	j = 0;
	if (dst_len > dstsize)
		return (dstsize + src_len);
	while (i + 1 < dstsize && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}

void	*ft_memmove(void *dst, const void *src, int len)
{
	int					i;
	unsigned char		*tmp_dst;
	unsigned char		*tmp_src;

	i = -1;
	tmp_dst = (unsigned char *)dst;
	tmp_src = (unsigned char *)src;
	if (len == 0 || (dst == (void *)0 && src == (const void *)0))
		return (dst);
	if (tmp_dst < tmp_src)
	{
		while (++i < len)
			tmp_dst[i] = tmp_src[i];
	}
	else
	{
		while (++i < len)
			tmp_dst[len - i - 1] = tmp_src[len - i - 1];
	}
	return (dst);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;
	int		len;

	if (s1 == 0 || s2 == 0)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	tmp = (char *)malloc(sizeof(char) * (len));
	if (!tmp)
		return (0);
	ft_memmove(tmp, s1, ft_strlen(s1) + 1);
	ft_strlcat(tmp, s2, len);
	tmp[len - 1] = '\0';
	return (tmp);
}

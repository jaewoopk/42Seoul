/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewoopk000@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 13:53:29 by jaewopar          #+#    #+#             */
/*   Updated: 2021/12/06 19:01:04 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len);

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
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

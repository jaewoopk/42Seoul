/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewoopk000@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 13:53:06 by jaewopar          #+#    #+#             */
/*   Updated: 2021/12/01 18:03:21 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n);

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	char		*tmp_s;
	char		tmp_c;

	tmp_s = (char *)s;
	tmp_c = (char)c;
	i = 0;
	while (n)
	{
		if (tmp_s[i] == tmp_c)
			return ((void *)(s + i));
		i++;
		n--;
	}
	return (0);
}

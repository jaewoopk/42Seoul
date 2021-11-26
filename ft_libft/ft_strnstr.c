/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewoopk000@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 13:54:48 by jaewopar          #+#    #+#             */
/*   Updated: 2021/11/25 13:54:50 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	while (haystack[i] && len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j] != '\0' && len)
		{
			j++;
			len--;
		}
		if (needle[j] == '\0')
			return ((char *)(haystack + i));
		len += j;
		i++;
		len--;
	}
	if (*needle == 0)
		return ((char *)haystack);
	return (NULL);
}

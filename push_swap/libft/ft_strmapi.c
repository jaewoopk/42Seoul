/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewoopk000@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 19:03:18 by jaewopar          #+#    #+#             */
/*   Updated: 2021/12/06 19:03:21 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t		i;
	size_t		len;
	char		*tmp_s;

	i = 0;
	if (s == 0 || f == 0)
		return (0);
	len = ft_strlen(s);
	tmp_s = (char *)malloc(sizeof(char) * (len + 1));
	if (!tmp_s)
		return (0);
	while (i < len)
	{
		tmp_s[i] = f(i, s[i]);
		i++;
	}
	tmp_s[i] = '\0';
	return (tmp_s);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewoopk000@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 19:02:51 by jaewopar          #+#    #+#             */
/*   Updated: 2021/12/06 19:02:52 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*));

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int		i;
	size_t				len;

	if (s == 0 || f == 0)
		return ;
	i = 0;
	len = ft_strlen(s);
	while (i < (unsigned int)len)
	{
		f(i, s + i);
		i++;
	}
}

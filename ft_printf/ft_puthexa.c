/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewoopk000@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:55:18 by jaewopar          #+#    #+#             */
/*   Updated: 2022/05/04 16:55:22 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned int n, int *result)
{
	char		ch;

	if (n < 16)
	{
		ch = '0' + n;
		if (n >= 10)
			ch = 'a' + n - 10;
		write (1, &ch, 1);
		*result += 1;
	}
	else
	{
		ft_puthexa(n / 16, result);
		ft_puthexa(n % 16, result);
	}
	return (*result);
}

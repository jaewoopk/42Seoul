/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_pointer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewoopk000@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:55:44 by jaewopar          #+#    #+#             */
/*   Updated: 2022/05/04 16:55:46 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa_pointer(unsigned long n, int *result)
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
		ft_puthexa_pointer(n / 16, result);
		ft_puthexa_pointer(n % 16, result);
	}
	return (*result);
}

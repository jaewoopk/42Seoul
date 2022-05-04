/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_uint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewoopk000@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:54:25 by jaewopar          #+#    #+#             */
/*   Updated: 2022/05/04 16:54:27 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_uint(unsigned int n, int *result)
{
	char		ch;

	if (n < 10)
	{
		ch = '0' + n;
		write (1, &ch, 1);
		*result += 1;
	}
	else
	{
		ft_putnbr_uint(n / 10, result);
		ft_putnbr_uint(n % 10, result);
	}
	return (*result);
}

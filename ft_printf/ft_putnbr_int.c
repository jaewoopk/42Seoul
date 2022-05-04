/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewoopk000@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:53:51 by jaewopar          #+#    #+#             */
/*   Updated: 2022/05/04 16:53:55 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_int(int n, int *result)
{
	char		ch;

	if (n == -2147483648)
	{
		write (1, "-2147483648", 11);
		*result += 11;
	}
	else if (n < 0)
	{
		write (1, "-", 1);
		ft_putnbr_int(-n, result);
		*result += 1;
	}
	else if (n < 10)
	{
		ch = '0' + n;
		write (1, &ch, 1);
		*result += 1;
	}
	else
	{
		ft_putnbr_int(n / 10, result);
		ft_putnbr_int(n % 10, result);
	}
	return (*result);
}

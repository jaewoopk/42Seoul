/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_uphexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewoopk000@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:53:36 by jaewopar          #+#    #+#             */
/*   Updated: 2022/05/04 16:54:00 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_uphexa(unsigned int n, int *result)
{
	char		ch;

	if (n < 16)
	{
		ch = '0' + n;
		if (n >= 10)
			ch = 'A' + n - 10;
		write (1, &ch, 1);
		*result += 1;
	}
	else
	{
		ft_put_uphexa(n / 16, result);
		ft_put_uphexa(n % 16, result);
	}
	return (*result);
}

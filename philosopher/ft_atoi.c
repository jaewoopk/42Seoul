/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   forks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewopar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 14:28:17 by jaewopar          #+#    #+#             */
/*   Updated: 2022/02/07 17:50:55 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

static int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\v' || \
	c == '\n' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

static int	ft_isnumber(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

static int	ft_issymbol(char c)
{
	if (c == '+' || c == '-')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int				i;
	int				sign;
	unsigned int	res;

	i = 0;
	sign = 1;
	res = 0;
	while (ft_isspace(str[i]))
		i++;
	if (ft_issymbol(str[i]))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_isnumber(str[i]))
	{
		res = res * 10 + (unsigned int)(str[i] - '0');
		if (res > 2147483648 && sign < 0)
			return (0);
		else if (res > 2147483647 && sign > 0)
			return (-1);
		i++;
	}
	return ((unsigned)sign * res);
}

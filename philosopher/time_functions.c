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

long int	get_time(void)
{
	long int		timestamp;
	struct timeval	time;

	timestamp = 0;
	gettimeofday(&time, NULL);
	timestamp = (time.tv_sec * 1000) + (time.tv_usec / 1000);
	return (timestamp);
}

void	handmade_usleep(long int timetosleep)
{
	long int	start;
	long int	actual_time;
	long int	end;

	start = get_time();
	end = start + timetosleep;
	while (1)
	{
		actual_time = get_time();
		if (actual_time >= end)
			break ;
		usleep(100);
	}
}

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

void	lock_forks(t_philo *philo, t_data *data)
{
	if (philo->id % 2 == 0)
	{
		pthread_mutex_lock(&philo->forks[philo->id % data->nb_of_philo]);
		pthread_mutex_lock(&philo->forks[philo->id - 1]);
	}
	else
	{
		pthread_mutex_lock(&philo->forks[philo->id - 1]);
		pthread_mutex_lock(&philo->forks[philo->id % data->nb_of_philo]);
	}
}

void	unlock_forks(t_philo *philo, t_data *data)
{
	if (philo->id % 2 == 0)
	{
		pthread_mutex_unlock(&philo->forks[philo->id % data->nb_of_philo]);
		pthread_mutex_unlock(&philo->forks[philo->id - 1]);
	}
	else
	{
		pthread_mutex_unlock(&philo->forks[philo->id - 1]);
		pthread_mutex_unlock(&philo->forks[philo->id % data->nb_of_philo]);
	}
}

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

void	eat_while_philo_need(t_philo *philo)
{
	while (is_alive(philo) == 1 && philo->nb_meal > 0)
	{		
		eat(philo);
		if (philo->nb_meal > 0)
			sleep_and_think(philo);
	}
	pthread_mutex_lock(&philo->data->meal_mutex);
	philo->data->nb_time_must_eat--;
	pthread_mutex_unlock(&philo->data->meal_mutex);
}

void	one_philo_eat(t_philo *philo)
{
	display(philo, "has taken a fork");
	usleep(philo->data->time_to_die * 1000);
	printf("%ld ms : philo %d died\n", (get_time() - \
	philo->data->start_time), philo->id);
}

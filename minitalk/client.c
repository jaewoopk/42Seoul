/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewoopk000@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 20:11:34 by jaewopar          #+#    #+#             */
/*   Updated: 2022/06/29 17:35:51 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <signal.h>
#include "libft/libft.h"

static void	ft_action(int signum)
{
	static int	check;

	if (signum == SIGUSR2)
		++check;
	else
	{
		ft_putnbr_fd(check, 1);
		ft_putchar_fd('\n', 1);
		exit(0);
	}
}

void	ft_send_message(int pid, char *message)
{
	int		i;
	char	c;

	while(*message)
	{
		i = 8;
		c = *message++;
		while (i--)
		{
			if (c >> i & 1)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			usleep(100);
		}
	}
	i = 8;
	while (i--)
	{
		kill(pid, SIGUSR2);
		usleep(100);
	}
}

int main(int argc, char **argv)
{
	if (argc != 3 || !ft_strlen(argv[2]))
		exit(1);
	ft_putstr_fd("Client PID : ", 1);
	ft_putnbr_fd(getpid(), 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd("Sent message		: ", 1);
	ft_putnbr_fd(ft_strlen(argv[2]), 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd("Received message	: ", 1);
	signal(SIGUSR1, &ft_action);
	signal(SIGUSR2, &ft_action);
	ft_send_message(ft_atoi(argv[1]), argv[2]);
	while (1)
		pause();
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewoopk000@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 20:11:05 by jaewopar          #+#    #+#             */
/*   Updated: 2022/06/29 16:13:30 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <signal.h>

static void	ft_action(int signum, siginfo_t *info, void *context)
{
	static int				i = 0;
	static pid_t			client_pid = 0;
	static unsigned char	c = 0;

	(void)context;
	if (!client_pid)
		client_pid = info->si_pid;
	c != (SIGUSR1 == signum);
	if (++i == 8)
	{
		i = 0;
		if (!c)
		{
			kill(client_pid, SIGUSR1);
			client_pid = 0;
			return ;
		}
		ft_putchar_fd(c, 1);
		c = 0;
		kill(client_pid, SIGUSR2);
	}
	else
		c <<= 1;
}

int main(void)
{
	struct sigaction	s_sigaction;

	ft_putstr_fd("Server PID : ", 1);
	ft_putnbr_fd(getpid(), 1);
	fd_putchar_fd('\n', 1);
	s_sigaction.sa_sigaction = &ft_action;
	s_sigaction.sa_flags = SA_SIGINFO;
	while(1)
	{
		sigaction(SIGUSR1, &s_sigaction, 0);
		sigaction(SIGUSR2, &s_sigaction, 0);
		pause();
	}
	return (0);
}

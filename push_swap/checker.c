/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewopar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:12:33 by jaewopar          #+#    #+#             */
/*   Updated: 2022/07/30 16:18:19 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include "push_swap.h"
#include "libft/libft.h"

void	push_swap_checker(char *s, t_node *a, t_node *b, t_info *info)
{
	if (!ft_strncmp(s, "sa\n", 3))
		sa_checker(a, info);
	else if (!ft_strncmp(s, "sb\n", 3))
		sb_checker(b, info);
	else if (!ft_strncmp(s, "ss\n", 3))
		ss_checker(a, b, info);
	else if (!ft_strncmp(s, "pa\n", 3))
		pa_checker(a, b, info);
	else if (!ft_strncmp(s, "pb\n", 3))
		pb_checker(a, b, info);
	else if (!ft_strncmp(s, "ra\n", 3))
		ra_checker(a, info);
	else if (!ft_strncmp(s, "rb\n", 3))
		rb_checker(b, info);
	else if (!ft_strncmp(s, "rr\n", 3))
		rr_checker(a, b, info);
	else if (!ft_strncmp(s, "rra\n", 4))
		rra_checker(a, info);
	else if (!ft_strncmp(s, "rrb\n", 4))
		rrb_checker(b, info);
	else if (!ft_strncmp(s, "rrr\n", 4))
		rrr_checker(a, b, info);
	else
		error_message(1);
}

void	ft_checker(t_node *a, t_node *b, t_info *info)
{
	char	*command;

	command = get_next_line(0);
	while (command)
	{
		free(command);
		push_swap_checker(command, a, b, info);
		command = get_next_line(0);
	}
	if (info->size_b == 0 && prev_sorted(a))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}

int	main(int argc, char *argv[])
{
	t_node	*a;
	t_node	*b;
	t_info	*info;

	a = malloc(sizeof(t_node));
	if (!a || argc < 2)
		return (0);
	b = malloc(sizeof(t_node));
	if (!b)
		return (0);
	info = malloc(sizeof(t_info));
	if (!info)
		return (0);
	init(a, info, argc, argv);
	check_overlap(a);
	if (prev_sorted(a))
	{
		free_node(a, b, info);
		return (0);
	}
	ft_checker(a, b, info);
	free_node(a, b, info);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewopar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:33:09 by jaewopar          #+#    #+#             */
/*   Updated: 2022/07/29 14:30:25 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

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
		error_message(4);
	}
	ft_sandglass(a, b, info);
	free_node(a, b, info);
	return (0);
}

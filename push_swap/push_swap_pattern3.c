/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_pattern3.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewopar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 14:22:05 by jaewopar          #+#    #+#             */
/*   Updated: 2022/07/29 14:26:28 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

void	rra(t_node *a)
{
	t_node	*tmp;
	t_node	*tmp2;

	tmp = a->next;
	tmp2 = a;
	while (tmp2->next)
		tmp2 = tmp2->next;
	tmp2->next = tmp;
	tmp->prev = tmp2;
	tmp2->prev->next = NULL;
	tmp2->prev = a;
	a->next = tmp2;
	write(1, "rra\n", 4);
}

void	rrb(t_node *b)
{
	t_node	*tmp;
	t_node	*tmp2;

	tmp = b->next;
	tmp2 = b;
	while (tmp2->next)
		tmp2 = tmp2->next;
	tmp2->next = tmp;
	tmp->prev = tmp2;
	tmp2->prev->next = NULL;
	tmp2->prev = b;
	b->next = tmp2;
	write(1, "rrb\n", 4);
}

void	rrr(t_node *a, t_node *b)
{
	rra(a);
	rrb(b);
	write(1, "rrr\n", 4);
}

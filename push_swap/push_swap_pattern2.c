/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_pattern2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewopar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 14:21:57 by jaewopar          #+#    #+#             */
/*   Updated: 2022/07/30 16:06:30 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

void	pa(t_node *a, t_node *b, t_info *info)
{
	t_node	*tmp_a;
	t_node	*tmp_b;

	if (info->size_b == 0)
		error_message(3);
	tmp_a = a->next;
	tmp_b = b->next;
	if (tmp_b->next != NULL)
	{
		b->next = tmp_b->next;
		tmp_b->next->prev = b;
	}
	else
		b->next = NULL;
	a->next = tmp_b;
	tmp_b->next = NULL;
	if (tmp_a)
	{
		tmp_b->next = tmp_a;
		tmp_a->prev = tmp_b;
	}
	tmp_b->prev = a;
	info->size_a += 1;
	info->size_b -= 1;
	write(1, "pa\n", 3);
}

void	pb(t_node *a, t_node *b, t_info *info)
{
	t_node	*tmp_a;
	t_node	*tmp_b;

	if (info->size_a == 0)
		error_message(3);
	tmp_a = a->next;
	tmp_b = b->next;
	if (tmp_a->next != NULL)
	{
		a->next = tmp_a->next;
		tmp_a->next->prev = a;
	}
	else
		a->next = NULL;
	b->next = tmp_a;
	tmp_a->next = NULL;
	if (tmp_b)
	{
		tmp_a->next = tmp_b;
		tmp_b->prev = tmp_a;
	}
	tmp_a->prev = b;
	info->size_a -= 1;
	info->size_b += 1;
	write(1, "pb\n", 3);
}

void	ra(t_node *a, t_info *info)
{
	t_node	*tmp;
	t_node	*tmp2;

	if (info->size_a < 2)
		return ;
	tmp = a->next;
	tmp2 = a;
	if (tmp->next == NULL || tmp2->next == NULL)
		return ;
	while (tmp2->next)
		tmp2 = tmp2->next;
	a->next = tmp->next;
	tmp->next->prev = a;
	tmp2->next = tmp;
	tmp->prev = tmp2;
	tmp->next = NULL;
	write(1, "ra\n", 3);
}

void	rb(t_node *b, t_info *info)
{
	t_node	*tmp;
	t_node	*tmp2;

	if (info->size_b < 2)
		return ;
	tmp = b->next;
	tmp2 = b;
	if (tmp->next == NULL || tmp2->next == NULL)
		return ;
	while (tmp2->next)
		tmp2 = tmp2->next;
	b->next = tmp->next;
	tmp2->next = tmp;
	tmp->prev = tmp2;
	tmp->next = NULL;
	write(1, "rb\n", 3);
}

void	rr(t_node *a, t_node *b, t_info *info)
{
	ra(a, info);
	rb(b, info);
	write(1, "rr\n", 3);
}

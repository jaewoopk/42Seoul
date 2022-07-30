/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_pattern.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewopar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 16:09:08 by jaewopar          #+#    #+#             */
/*   Updated: 2022/07/30 16:14:43 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include "push_swap.h"
#include "libft/libft.h"

void	sa_checker(t_node *a, t_info *info)
{
	t_node	*tmp1;
	t_node	*tmp2;

	if (info->size_a < 2)
		return ;
	tmp1 = a->next;
	tmp2 = tmp1->next;
	tmp1->next = tmp2->next;
	tmp2->next = tmp1;
	if (tmp1->next != NULL)
		tmp1->next->prev = tmp1;
	a->next = tmp2;
	tmp2->prev = a;
	tmp1->prev = tmp2;
}

void	sb_checker(t_node *b, t_info *info)
{
	t_node	*tmp1;
	t_node	*tmp2;

	if (info->size_b < 2)
		return ;
	tmp1 = b->next;
	tmp2 = tmp1->next;
	tmp1->next = tmp2->next;
	tmp2->next = tmp1;
	if (tmp1->next != NULL)
		tmp1->next->prev = tmp1;
	b->next = tmp2;
	tmp2->prev = b;
	tmp1->prev = tmp2;
}

void	ss_checker(t_node *a, t_node *b, t_info *info)
{
	sa_checker(a, info);
	sb_checker(b, info);
}

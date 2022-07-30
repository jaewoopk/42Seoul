/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sandglass.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewopar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 14:20:34 by jaewopar          #+#    #+#             */
/*   Updated: 2022/07/29 14:20:57 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

void	ft_sandglass(t_node *a, t_node *b, t_info *info)
{
	int	chunk;
	int	size;

	size = info->size_a;
	chunk = 0.000000053 * size * size + 0.028 * size + 14;
	if (info->size_a == 2)
		sa(a);
	else if (info->size_a == 3)
		size_three_sort(a);
	else if (info->size_a == 4)
		size_four_sort(a, b, info);
	else if (info->size_a == 5)
		size_five_sort(a, b, info);
	else
	{
		a_to_b(a, b, info, chunk);
		b_to_a(a, b, info);
	}
}

void	a_to_b(t_node *a, t_node *b, t_info *info, int chunk)
{
	int	i;

	i = 0;
	while (info->size_a)
	{
		if (a->next->id <= i)
		{
			pb(a, b, info);
			i++;
		}
		else if (a->next->id <= i + chunk)
		{
			pb(a, b, info);
			rb(b);
			i++;
		}
		else
		{
			if (i < info->size_a / 2 && i >= 0)
				rra(a);
			else
				ra(a);
		}
	}
}

void	b_to_a(t_node *a, t_node *b, t_info *info)
{
	int	len;

	len = info->size_b - 1;
	while (info->size_b)
	{
		choose_rb_rrb(b, info, len);
		pa(a, b, info);
		len--;
	}
}

void	choose_rb_rrb(t_node *b, t_info *info, int len)
{
	int		i;
	t_node	*tmp;

	i = 1;
	tmp = b->next;
	while (tmp->id != len)
	{
		i++;
		tmp = tmp->next;
	}
	if (i <= info->size_b / 2)
	{
		while (b->next->id != len)
			rb(b);
	}
	else
	{
		while (b->next->id != len)
			rrb(b);
	}
}

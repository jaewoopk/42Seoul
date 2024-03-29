/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewopar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 14:22:09 by jaewopar          #+#    #+#             */
/*   Updated: 2022/07/29 18:03:22 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

void	error_message(int check)
{
	if (check == 1)
		write(1, "Error\n", 6);
	else if (check == 2)
		write(1, "Error\n", 6);
	else if (check == 3)
		write(1, "Error\n", 6);
	else if (check == 4)
		write(1, "Error\n", 6);
	exit(1);
}

void	push_last(t_node *node, t_node *newNode)
{
	t_node	*tmp;

	tmp = node;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = newNode;
	newNode->prev = tmp;
}

void	free_split(char **split, int size)
{
	int	num;

	num = 0;
	while (size)
	{
		free(*split);
		split++;
		size--;
		num++;
	}
	while (num)
	{
		split--;
		num--;
	}
	free(split);
}

void	free_node(t_node *a, t_node *b, t_info *info)
{
	t_node	*tmp_a;
	t_node	*tmp_b;

	tmp_a = a->next;
	while (info->size_a)
	{
		free(a);
		a = tmp_a;
		tmp_a = tmp_a->next;
		info->size_a--;
	}
	if (info->size_a == 0)
		free(a);
	tmp_b = b->next;
	while (info->size_b)
	{
		free(b);
		b = tmp_b;
		tmp_b = tmp_b->next;
		info->size_b--;
	}
	if (info->size_b == 0)
		free(b);
	free(info);
	return ;
}

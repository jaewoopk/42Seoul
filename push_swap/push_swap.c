/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewoopk000@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:33:09 by jaewopar          #+#    #+#             */
/*   Updated: 2022/07/05 19:16:46 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

void	init(t_node *a, t_node *b, t_info *info, int argc, char *argv[])
{
	int 	i;
	t_node	*tmp;
	t_node	*previous;

	i = 1;
	b = NULL;
	tmp = a;
	while (i < argc)
	{
		t_node* newNode = new_node(ft_atoi(argv[i]));
		tmp->next = newNode;
		previous = tmp;
		tmp = tmp->next;
		tmp->prev = previous;
		if (i == 1)
			info->bottom_a = newNode;
		i++;
	}
	info->size_a = i;
	info->size_b = 0;
	info->top_a = tmp;
}

t_node*	new_node(int data)
{
	t_node *t;

	t = (t_node *)malloc(sizeof(t_node));
	if (!t)
		exit (1);
	t->data = data;
	t->next = NULL;
	t->prev = NULL;
	return (t);
}

int main(int argc, char *argv[])
{
	t_node	*a;
	t_node	*b;
	t_info	*info;
	t_node	*tmp;

	if (!(a = malloc(sizeof(t_node))) ||\
		!(b = malloc(sizeof(t_node))) ||\
		!(info = malloc(sizeof(t_info))))
		exit(1);

	init(a ,b, info, argc, argv);
	tmp = a->next;
	a = a->next;
	for (int i = 0; i < info->size_a - 1; i++)
	{
		printf("%d\n",a->data);
		a = a->next;
	}
	a = tmp;
	sa(a);
	for (int i = 0; i < info->size_a - 1; i++)
	{
		printf("%d\n",a->data);
		a = a->next;
	}
	tmp = tmp->prev;
	for (int i = 0; i < info->size_a; i++)
	{
		free(tmp);
		tmp = tmp->next;
	}
	free(b);
	free(info);
	exit(0);
}

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

	(void)b;
	i = 1;
	a->data = 0;
	tmp = a;
	while (i < argc)
	{
		t_node* newNode = new_node(ft_atoi(argv[i]));
		tmp->next = newNode;
		previous = tmp;
		tmp = tmp->next;
		tmp->prev = previous;
		i++;
	}
	info->size_a = i - 1;
	info->size_b = 0;
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
	t_node	*tmp2;

	if (!(a = malloc(sizeof(t_node))) ||\
		!(b = malloc(sizeof(t_node))) ||\
		!(info = malloc(sizeof(t_info))))
		exit(1);

	init(a ,b, info, argc, argv);
	tmp = a;
	tmp2= b;
	for (int i = 0; i < info->size_a; i++)
	{
		a = a->next;
		printf("%d\n",a->data);
	}
	a = tmp;
	sa(a);
	for (int i = 0; i < info->size_a; i++)
	{
		a = a->next;
		printf("%d\n",a->data);
	}
	a = tmp;
	b = tmp2;
	pb(a,b,info);
	a = tmp;
	b = tmp2;
	pb(a,b,info);
	a = tmp;
	b = tmp2;
	pb(a,b,info);
	a = tmp;
	for (int i = 0; i < info->size_a; i++)
	{
		a = a->next;
		printf("%d\n",a->data);
	}
	printf("=====================\n");
	b = tmp2;
	for (int i = 0; i < info->size_b; i++)
	{
		b = b->next;
		printf("%d\n",b->data);
	}
	a = tmp;
	b = tmp2;

	rr(a,b);
	a = tmp;
	b = tmp2;
	printf("=====================\n");
	for (int i = 0; i < info->size_a; i++)
	{
		a = a->next;
		printf("%d\n",a->data);
	}
	printf("=====================\n");
	for (int i = 0; i < info->size_b; i++)
	{
		b = b->next;
		printf("%d\n",b->data);
	}

	a = tmp;
	tmp = a->next;
	printf("=====================\n");
	for (int i = 0; i < info->size_a; i++)
	{
		free(a);
		a = tmp;
		tmp = tmp->next;
	}
	free(b);
	free(info);
	exit(0);
}

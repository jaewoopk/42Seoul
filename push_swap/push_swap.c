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

int main(int argc, char *argv[])
{
	t_node	*a;
	t_node	*b;
	t_node	*tmp;
	t_info	*info;

	if (argc < 2 || !(a = malloc(sizeof(t_node))) || \
		!(b = malloc(sizeof(t_node))) || !(info = malloc(sizeof(t_info))))
		return (0);
	tmp = a;
	init(a, info, argc, argv);
	check_overlap(a);
	if (prev_sorted(a))
	{
		free_node(a, b, info);
		error_message(4);
	}
	ft_sandglass(a,b,info);
	/*
	printf("=====================\n");
	for (int i = 0; i < info->size_a; i++)
	{
		a = a->next;
		printf("data = %d -- id = %d\n",a->data, a->id);
	}
	printf("=====================\n");
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
	b = tmp2;
	for (int i = 0; i < info->size_a; i++)
	{
		a = a->next;
		printf("data = %d -- id = %d\n",a->data, a->id);
	}
	printf("=====================\n");
	a = tmp;
	b = tmp2;
	for (int i = 0; i < info->size_b; i++)
	{
		b = b->next;
		printf("data = %d -- id = %d\n",b->data, b->id);
	}
	a = tmp;
	b = tmp2;

	rr(a,b);
	
	printf("=====================\n");
	
	a = tmp;
	b = tmp2;
	for (int i = 0; i < info->size_a; i++)
	{
		a = a->next;
		printf("data = %d -- id = %d\n",a->data, a->id);
	}
	printf("=====================\n");
	for (int i = 0; i < info->size_b; i++)
	{
		b = b->next;
		printf("data = %d -- id = %d\n",b->data, b->id);
	}
	a = tmp;
	b = tmp2;
	rrr(a,b);
	printf("=====================\n");
	a = tmp;
	b = tmp2;
	*/
	for (int i = 0; i < info->size_a; i++)
	{
		a = a->next;
		printf("data = %d -- id = %d\n",a->data, a->id);
	}
	printf("=====================\n");
	a = tmp;
	free_node(a, b, info);
	return (0);
}

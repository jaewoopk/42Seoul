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

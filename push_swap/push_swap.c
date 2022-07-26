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

void	error_message(int check)
{
	if (check == 1)
		printf("Error\nIt's not number\n");
	else if (check == 2)
		printf("Error\nIt's overlapped\n");
	else if (check == 3)
		printf("Error\nIt's no data to push something\n");
	exit(1);
}

void	check_overlap(t_node *a)
{
	t_node	*tmp;
	t_node	*tmp2;

	tmp = a->next;
	while (tmp)
	{
		tmp2 = tmp->next;
		while (tmp2)
		{
			if (tmp->data > tmp2->data)
				tmp->id++;
			else if (tmp->data < tmp2->data)
				tmp2->id++;
			else
				error_message(2);
			tmp2 = tmp2->next;
		}
		tmp = tmp->next;
	}
}

int		check_num(const char *str)
{
	long long		sign;
	long long		n;
	int				i;
	int				checker;

	sign = 1;
	n = 0;
	i = 0;
	checker = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = (n * 10) + (str[i] - '0');
		i++;
		checker++;
	}
	if (n * sign > 2147483647 || n * sign < -2147483648 \
		|| checker == 0)
		error_message(1);
	return (n * sign);
}

void	init(t_node *a, t_info *info, int argc, char *argv[])
{
	int 	i;
	int		num;

	i = 0;
	a->data = 0;
	num = 0;
	while (++i < argc)
	{
		char	**split = ft_split(argv[i],' ');
		int		tmp_num = num;
		while (*split)
		{
			t_node* newNode;
			newNode = new_node(check_num(*split));
			push_last(a, newNode);
			split++;
			num++;
		}
		free_split(split - (num - tmp_num), num - tmp_num);
	}
	info->size_a = num;
	info->size_b = 0;
}

t_node*	new_node(int data)
{
	t_node *t;

	t = (t_node *)malloc(sizeof(t_node));
	if (!t)
		exit (1);
	t->data = data;
	t->id = 0;
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

	if (argc < 2)
		exit(1);
	if (!(a = malloc(sizeof(t_node))) ||\
		!(b = malloc(sizeof(t_node))) ||\
		!(info = malloc(sizeof(t_info))))
		exit(1);

	init(a, info, argc, argv);
	check_overlap(a);

	tmp = a;
	tmp2= b;

	for (int i = 0; i < info->size_a; i++)
	{
		a = a->next;
		printf("data = %d -- id = %d\n",a->data, a->id);
	}
	a = tmp;
	b = tmp2;
	ft_sandglass(a,b,info);
	printf("=====================\n");
	for (int i = 0; i < info->size_a; i++)
	{
		a = a->next;
		printf("data = %d -- id = %d\n",a->data, a->id);
	}
	printf("=====================\n");
	/*a = tmp;
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
	for (int i = 0; i < info->size_a; i++)
	{
		a = a->next;
		printf("data = %d -- id = %d\n",a->data, a->id);
	}
	a = tmp;
	b = tmp2;
	printf("=====================\n");
	for (int i = 0; i < info->size_b; i++)
	{
		b = b->next;
		printf("data = %d -- id = %d\n",b->data, b->id);
	}
	*/
	a = tmp;
	b = tmp2;
	free_node(a, b, info);
	return (0);
}

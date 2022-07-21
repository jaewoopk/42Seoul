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
	{
		printf("Error\nIt's not number\n");
		exit(1);
	}
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
				error_message(1);
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
	t_node	*tmp;
	t_node	*previous;

	i = 0;
	a->data = 0;
	tmp = a;
	num = 0;
	while (++i < argc)
	{
		char	**split = ft_split(argv[i],' ');
		while (*split)
		{
			t_node* newNode = new_node(check_num(*split));
			tmp->next = newNode;
			previous = tmp;
			tmp = tmp->next;
			tmp->prev = previous;
			split++;
			num++;
		}
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
	t_node	*tmp_last;
	t_node	*tmp_last2;

	if (!(a = malloc(sizeof(t_node))) ||\
		!(b = malloc(sizeof(t_node))) ||\
		!(info = malloc(sizeof(t_info))))
		exit(1);

	init(a, info, argc, argv);
	check_overlap(a);
	tmp_last = a;
	tmp_last2 = b;
	while (tmp_last->next)
		tmp_last = tmp_last->next;
	while (tmp_last2->next)
		tmp_last2 = tmp_last2->next;

	tmp = a;
	tmp2= b;
	a = tmp_last;
	b = tmp_last2;
	for (int i = 0; i < info->size_a; i++)
	{
		printf("data = %d -- id = %d\n",a->data, a->id);
		a = a->prev;
	}
	a = tmp;
	ft_sandglass(a,b,info);
	a = tmp_last;
	b = tmp_last2;
	for (int i = 0; i < info->size_a; i++)
	{
		printf("%d\n",a->data);
		a = a->prev;
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
	b = tmp2;
	tmp_last = a;
	tmp_last2 = b;
	while (tmp_last->next)
		tmp_last = tmp_last->next;
	while (tmp_last2->next)
		tmp_last2 = tmp_last2->next;
	a = tmp_last;
	b = tmp_last2;
	for (int i = 0; i < info->size_a; i++)
	{
		printf("%d\n",a->data);
		a = a->prev;
	}
	printf("=====================\n");
	for (int i = 0; i < info->size_b; i++)
	{
		printf("%d\n",b->data);
		b = b->prev;
	}
	a = tmp;
	b = tmp2;

	rr(a,b);
	
	printf("=====================\n");
	a = tmp_last;
	b = tmp_last2;
	for (int i = 0; i < info->size_a; i++)
	{
		printf("%d\n",a->data);
		a = a->prev;
	}
	printf("=====================\n");
	for (int i = 0; i < info->size_b; i++)
	{
		printf("%d\n",b->data);
		b = b->prev;
	}
	a = tmp;
	b = tmp2;
	rrr(a,b);
	printf("=====================\n");
	a = tmp_last;
	b = tmp_last2;
	for (int i = 0; i < info->size_a; i++)
	{
		printf("%d\n",a->data);
		a = a->prev;
	}
	printf("=====================\n");
	for (int i = 0; i < info->size_b; i++)
	{
		printf("%d\n",b->data);
		b = b->prev;
	}
	a = tmp;
	b = tmp2;
	tmp = a->next;
	printf("=====================\n");
	for (int i = 0; i < info->size_a; i++)
	{
		free(a);
		a = tmp;
		tmp = tmp->next;
	}
	tmp2 = b->next;
	for (int i = 0; i < info->size_b; i++)
	{
		free(b);
		b = tmp2;
		tmp2 = tmp2->next;
	}
	free(info);
	exit(0);
}

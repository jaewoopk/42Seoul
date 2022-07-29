#include "push_swap.h"
#include "libft/libft.h"

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
	int		tmp_num;

	i = 0;
	a->data = 0;
	num = 0;
	while (++i < argc)
	{
		char	**split = ft_split(argv[i],' ');
		tmp_num = num;
		while (*split)
		{
			t_node* new_node;
			new_node = make_new_node(check_num(*split));
			push_last(a, new_node);
			split++;
			num++;
		}
		if (split - (num - tmp_num))
			free_split(split - (num - tmp_num), num - tmp_num);
		else
			error_message(5);
	}
	info->size_a = num;
	info->size_b = 0;
}

t_node*	make_new_node(int data)
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
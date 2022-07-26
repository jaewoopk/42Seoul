#include "push_swap.h"
#include "libft/libft.h"

void    ft_sandglass(t_node *a, t_node* b, t_info *info)
{
    t_node  *tmp;
    int chunk;
    int size;

    size = info->size_a;
    //chunk = 0.000000053 * size * size + 0.03 * size + 14.5;
    chunk = 2;
    tmp = b;
    a_to_b(a, b, info, chunk);
    tmp = b->next;
    for (int i = 0; i < info->size_b; i++)
    {
        printf("b->data = %d -- b->id = %d\n",tmp->data, tmp->id);
        if (tmp->next == NULL)
            break;
        tmp = tmp->next;
    }
    printf("===================\n");
    b_to_a(a, b, info);
}

void    a_to_b(t_node *a, t_node *b, t_info *info, int chunk)
{
    int i;

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

void    b_to_a(t_node *a, t_node *b, t_info *info)
{
    int len;

    len = info->size_b - 1;
    while (info->size_b)
    {
        choose_rb_rrb(b, info, len);
        pa(a, b, info);
        len--;
    }
}

void	    choose_rb_rrb(t_node *b, t_info *info, int len)
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
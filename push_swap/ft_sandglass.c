#include "push_swap.h"
#include "libft/libft.h"

void    ft_sandglass(t_node *a, t_node* b, t_info *info)
{
    int chunk;
    int size;

    size = info->size_a;
    chunk = 0.000000053 * size * size + 0.03 * size + 14.5;
    a_to_b(a, b, info, chunk);
    b_to_a(a, b, info);
}

void    a_to_b(t_node *a, t_node *b, t_info *info, int chunk)
{
    int len;
    int i;

    len = info->size_a - 1;
    i = 0;
    while (info->size_a)
    {
        if (get_top(a) <= i)
        {
            pb(a, b, info);
            i++;
        }
        else if (get_top(a) > i && get_top(a) <= i + chunk)
        {
            pb(a, b, info);
            rb(b);
            i++;
        }
        else if (get_top(a) > (i + chunk))
        {
            if (i < info->size_a / 2 && i >= 0)
                rra(a);
            else
                ra(a);
        }
        len--;
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

void	choose_rb_rrb(t_node *b, t_info *info, int len)
{
	int		i;
	t_node	*tmp;

	i = 1;
	tmp = b;
	while (tmp-> != len)
	{
		i++;
		tmp = tmp->next;
	}
	if (i <= info->size_b / 2)
	{
		while (len)
        {
			rb(b);
            len--;
            i++;
        }
	}
	else
	{
		while (b->head->id != len)
		{
            rrb(b);
            i++;
        }
	}
}
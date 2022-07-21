#include "push_swap.h"
#include "libft/libft.h"

void    rra(t_node *a)
{
    t_node  *tmp;
    int     tp;
    int     tp_id;

    tmp = a->next;
    tp = tmp->data;
    tp_id = tmp->id;
    while (tmp->next)
    {
        tmp->id = tmp->next->id;
        tmp->data = tmp->next->data;
        tmp = tmp->next;
    }
    tmp->data = tp;
    tmp->id = tp_id;
    printf("rra\n");
}

void    rrb(t_node *b)
{
    t_node  *tmp;
    int     tp;
    int     tp_id;

    tmp = b->next;
    tp = tmp->data;
    tp_id = tmp->id;
    while (tmp->next)
    {
        tmp->id = tmp->next->id;
        tmp->data = tmp->next->data;
        tmp = tmp->next;
    }
    tmp->data = tp;
    tmp->id = tp_id;
    printf("rrb\n");
}

void    rrr(t_node *a, t_node *b)
{
    rra(a);
    rrb(b);
    printf("rrr\n");
}
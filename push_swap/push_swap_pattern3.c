#include "push_swap.h"
#include "libft/libft.h"

void    rra(t_node *a)
{
    t_node  *tmp;
    int     tp;

    tmp = a->next;
    tp = tmp->data;
    
    while (tmp->next)
    {
        tmp->data = tmp->next->data;
        tmp = tmp->next;
    }
    tmp->data = tp;
    printf("rra\n");
}

void    rrb(t_node *b)
{
    t_node  *tmp;
    int     tp;

    tmp = b->next;
    tp = tmp->data;
    
    while (tmp->next)
    {
        tmp->data = tmp->next->data;
        tmp = tmp->next;
    }
    tmp->data = tp;
    printf("rrb\n");
}

void    rrr(t_node *a, t_node *b)
{
    rra(a);
    rrb(b);
    printf("rrr\n");
}
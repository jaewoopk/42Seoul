#include "push_swap.h"
#include "libft/libft.h"

void    sa(t_node *a)
{
    t_node  *tmp1;
    t_node  *tmp2;

    tmp1 = a->next;
    tmp2 = tmp1->next;

    tmp1->next = tmp2->next;
    tmp2->next = tmp1;
    tmp1->next->prev = tmp1;
    a->next = tmp2;
    tmp2->prev = a;
    tmp1->prev = tmp2;

    printf("sa\n");
}

void    sb(t_node *b)
{
    t_node  *tmp1;
    t_node  *tmp2;

    tmp1 = b->next;
    tmp2 = tmp1->next;

    tmp1->next = tmp2->next;
    tmp2->next = tmp1;
    tmp1->next->prev = tmp1;
    b->next = tmp2;
    tmp2->prev = b;
    tmp1->prev = tmp2;

    printf("sb\n");
}

void    ss(t_node *a, t_node *b)
{
    sa(a);
    sb(b);
    printf("ss\n");
}

int     get_top(t_node *node)
{
    t_node  *tmp;

    tmp = node;
    while(tmp->next)
        tmp = tmp->next;
    return (tmp->data);
}

t_node  *get_top_node(t_node *node)
{
    t_node  *tmp;

    tmp = node;
    while(tmp->next)
        tmp = tmp->next;
    return (tmp);
}

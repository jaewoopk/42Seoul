#include "push_swap.h"
#include "libft/libft.h"

void    sa(t_node *a)
{
    t_node  *tmp;
    int     temp;

    tmp = a;
    while (tmp->next->next)
        tmp = tmp->next;
    temp = tmp->data;
    tmp->data = tmp->next->data;
    tmp->next->data = temp;
    printf("sa\n");
}

void    sb(t_node *b)
{
    t_node  *tmp;
    int     temp;

    tmp = b;
    while (tmp->next->next)
        tmp = tmp->next;
    temp = tmp->data;
    tmp->data = tmp->next->data;
    tmp->next->data = temp;
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
    while(node->next)
        node = node->next;
    return (node->data);
}

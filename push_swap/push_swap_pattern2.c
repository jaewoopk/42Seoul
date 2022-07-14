#include "push_swap.h"
#include "libft/libft.h"

void    pa(t_node *a, t_node *b, t_info *info)
{
    t_node  *tmp_a;
    t_node  *tmp_b;

    tmp_a = a;
    tmp_b = b;
    while (tmp_a->next)
        tmp_a = tmp_a->next;
    while (tmp_b->next)
        tmp_b = tmp_b->next;
    if (info->size_b == 0)
        exit(1);
    if (tmp_b->prev != NULL)
        tmp_b->prev->next = NULL;
    tmp_b->prev = NULL;
    tmp_a->next = tmp_b;
    tmp_b->prev = tmp_a;
    info->size_a += 1;
    info->size_b -= 1;
    printf("pa\n");
}

void    pb(t_node *a, t_node *b, t_info *info)
{
    t_node  *tmp_a;
    t_node  *tmp_b;

    tmp_a = a;
    tmp_b = b;
    while (tmp_a->next)
        tmp_a = tmp_a->next;
    while (tmp_b->next)
        tmp_b = tmp_b->next;
    if (info->size_a == 0)
        exit(1);
    if (tmp_a->prev != NULL)
        tmp_a->prev->next = NULL;
    tmp_a->prev = NULL;
    tmp_b->next = tmp_a;
    tmp_a->prev = tmp_b;
    info->size_a -= 1;
    info->size_b += 1;
    printf("pb\n");
}

void    ra(t_node *a)
{
    t_node  *tmp;
    int     tp;

    tmp = a->next;
    while (tmp->next)
        tmp = tmp->next;
    
    tp = tmp->data;
    while (tmp != a)
    {
        tmp->data = tmp->prev->data;
        tmp = tmp->prev;
    }
    a->next->data = tp;
    printf("ra\n");
}

void    rb(t_node *b)
{
    t_node  *tmp;
    int     tp;

    tmp = b->next;
    while (tmp->next)
        tmp = tmp->next;
    
    tp = tmp->data;
    while (tmp != b)
    {
        tmp->data = tmp->prev->data;
        tmp = tmp->prev;
    }
    b->next->data = tp;
    printf("rb\n");
}

void    rr(t_node *a, t_node *b)
{
    ra(a);
    rb(b);
    printf("rr\n");
}
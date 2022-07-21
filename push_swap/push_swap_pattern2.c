#include "push_swap.h"
#include "libft/libft.h"

void    pa(t_node *a, t_node *b, t_info *info)
{
    t_node  *tmp_a;
    t_node  *tmp_b;

    tmp_a = get_top_node(a);
    tmp_b = get_top_node(b);
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

    tmp_a = get_top_node(a);
    tmp_b = get_top_node(b);
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
    int     tp_id;

    tmp = get_top_node(a);
    tp = tmp->data;
    tp_id = tmp->id;
    while (tmp != a)
    {
        tmp->id = tmp->prev->id;
        tmp->data = tmp->prev->data;
        tmp = tmp->prev;
    }
    a->next->data = tp;
    a->next->id = tp_id;
    printf("ra\n");
}

void    rb(t_node *b)
{
    t_node  *tmp;
    int     tp;
    int     tp_id;

    tmp = get_top_node(b);
    tp = tmp->data;
    tp_id = tmp->id;
    while (tmp != b)
    {
        tmp->id = tmp->prev->id;
        tmp->data = tmp->prev->data;
        tmp = tmp->prev;
    }
    b->next->data = tp;
    b->next->id = tp_id;
    printf("rb\n");
}

void    rr(t_node *a, t_node *b)
{
    ra(a);
    rb(b);
    printf("rr\n");
}
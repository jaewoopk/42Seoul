#include "push_swap.h"
#include "libft/libft.h"

void    sa(t_node *a)
{
    t_node  *tmp;
    t_node  *tmp2;

    tmp = a;
    while (tmp->next->next)
        tmp = tmp->next;
    tmp2 = tmp->next;
    tmp->prev->next = tmp2;
    tmp2->prev = tmp->prev;
    tmp2->next = tmp;
    tmp->prev = tmp2;
    tmp->next = NULL;
    printf("sa\n");
}
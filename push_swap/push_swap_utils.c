#include "push_swap.h"
#include "libft/libft.h"

/*
void    push_front(t_node *node, t_node *newNode)
{
    if (!(node->next))
    {
        node->next = newNode;
        newNode->prev = node;
        newNode->next = NULL;
    }
    else
    {
        newNode->next = node->next;
        node->next = newNode;
        newNode->next->prev = newNode;
        newNode->prev = node;
    }
}
*/

void    push_last(t_node *node, t_node *newNode)
{
    t_node  *tmp;

    tmp = node;

    while (tmp->next)
        tmp = tmp->next;
    
    tmp->next = newNode;
    newNode->prev = tmp;
}

void    free_split(char **split, int size)
{
    int num;

    num = 0;
    while (size)
    {
        free(*split);
        split++;
        size--;
        num++;
    }
    while (num)
    {
        split--;
        num--;
    }
    free(split);
}

void    free_node(t_node *a, t_node *b, t_info *info)
{
    t_node  *tmp_a;
    t_node  *tmp_b;

    tmp_a = a->next;
    while (info->size_a)
    {
        free(a);
        a = tmp_a;
        tmp_a = tmp_a->next;
        info->size_a--;
    }

    tmp_b = b->next;
	while (info->size_b)
    {
        free(b);
        b = tmp_b;
        tmp_b = tmp_b->next;
        info->size_b--;
    }
    free(info);
    exit(1);
}
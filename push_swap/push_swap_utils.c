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
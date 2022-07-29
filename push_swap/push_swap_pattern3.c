/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_pattern3.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewopar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 14:22:05 by jaewopar          #+#    #+#             */
/*   Updated: 2022/07/29 14:22:05 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

void    rra(t_node *a)
{
    t_node  *tmp;
    t_node  *tmp2;

    tmp = a->next;
    tmp2 = a;
    while(tmp2->next)
        tmp2 = tmp2->next;
    
    tmp2->next = tmp;
    tmp->prev = tmp2;
    tmp2->prev->next = NULL;
    tmp2->prev = a;
    a->next = tmp2;
    
    printf("rra\n");
}

void    rrb(t_node *b)
{
    t_node  *tmp;
    t_node  *tmp2;

    tmp = b->next;
    tmp2 = b;
    while(tmp2->next)
        tmp2 = tmp2->next;
    
    tmp2->next = tmp;
    tmp->prev = tmp2;
    tmp2->prev->next = NULL;
    tmp2->prev = b;
    b->next = tmp2;
    
    printf("rrb\n");
}

void    rrr(t_node *a, t_node *b)
{
    rra(a);
    rrb(b);
    printf("rrr\n");
}
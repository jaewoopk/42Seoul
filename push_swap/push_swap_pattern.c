/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_pattern.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewopar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 14:20:53 by jaewopar          #+#    #+#             */
/*   Updated: 2022/07/29 14:25:09 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

    write(1, "sa\n", 3);
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

    write(1, "sb\n", 3);
}

void    ss(t_node *a, t_node *b)
{
    sa(a);
    sb(b);
    write(1, "ss\n", 3);
}


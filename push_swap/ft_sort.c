/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewopar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 14:20:45 by jaewopar          #+#    #+#             */
/*   Updated: 2022/07/29 14:20:58 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

int     prev_sorted(t_node *a)
{
    t_node  *tmp;

    tmp = a;
    while (tmp->next)
    {
        if (tmp->id > tmp->next->id)
            return (0);
        tmp = tmp->next;
    }
    return (1);
}

void    size_three_sort(t_node *a)
{
    int a1;
    int a2;
    int a3;

    a1 = a->next->id;
    a2 = a->next->next->id;
    a3 = a->next->next->next->id;
    if (prev_sorted(a))
        return ;
    if (a1 == a2 - 2 && a1 == a3 - 1)
    {
        sa(a);
        ra(a);
    }
    else if (a1 == a2 + 1 && a1 == a3 - 1)
        sa(a);
    else if (a1 == a2 - 1 && a1 == a3 + 1)
        rra(a);
    else if (a1 == a2 + 2 && a1 == a3 + 1)
        ra(a);
    else if (a1 == a2 + 1 && a1 == a3 + 2)
    {
        sa(a);
        rra(a);
    }
}

void    size_four_sort(t_node *a, t_node *b, t_info *info)
{
    while (info->size_a > 3)
    {
        if (a->next->id == 0)
        {
            pb(a, b, info);
            break ;
        }
        else
            ra(a);
    }
    size_three_sort(a);
    pa(a, b, info);
}

void    size_five_sort(t_node *a, t_node *b, t_info *info)
{
    while (info->size_a > 3)
    {
        if (a->next->id < 2)
            pb(a, b, info);
        else
            ra(a);
    }
    size_three_sort(a);
    while (info->size_b)
        pa(a, b, info);
    if (a->next->id != 0)
        sa(a);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewoopk000@naver.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:33:16 by jaewopar          #+#    #+#             */
/*   Updated: 2022/07/05 19:10:15 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_node
{
	struct s_node	*prev;
	struct s_node	*next;
	int				data;
}	t_node;

typedef struct s_info
{
	int	size_a;
	int	size_b;
}	t_info;

void	init(t_node *a, t_node *b, t_info *info, int argc, char *argv[]);
t_node*	new_node(int data);
void    sa(t_node *a);
void    sb(t_node *b);
void    ss(t_node *a, t_node *b);
void    pa(t_node *a, t_node *b, t_info *info);
void    pb(t_node *a, t_node *b, t_info *info);
void    ra(t_node *a);
void    rb(t_node *b);
void    rr(t_node *a, t_node *b);
void    rra(t_node *a);
void    rrb(t_node *b);
void    rrr(t_node *a, t_node *b);

#endif

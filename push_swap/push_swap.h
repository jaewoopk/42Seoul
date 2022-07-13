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
	struct s_node	*top_a;
	struct s_node	*bottom_a;
	int	size_b;
	struct s_node	*top_b;
	struct s_node	*bottom_b;
}	t_info;

void	init(t_node *a, t_node *b, t_info *info, int argc, char *argv[]);
t_node*	new_node(int data);
void    sa(t_node *a);

#endif

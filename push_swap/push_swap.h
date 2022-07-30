/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewopar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:33:16 by jaewopar          #+#    #+#             */
/*   Updated: 2022/07/30 16:06:31 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_node
{
	struct s_node	*prev;
	struct s_node	*next;
	int				data;
	int				id;
}	t_node;

typedef struct s_info
{
	int	size_a;
	int	size_b;
}	t_info;

void	init(t_node *a, t_info *info, int argc, char *argv[]);
t_node	*make_new_node(int data);
void	push_front(t_node *node, t_node *newNode);
void	push_last(t_node *node, t_node *newNode);
void	error_message(int check);
void	check_overlap(t_node *a);
int		check_num(const char *str);
void	choose_rb_rrb(t_node *b, t_info *info, int len);
void	free_split(char **split, int size);
void	sa(t_node *a, t_info *info);
void	sb(t_node *b, t_info *info);
void	ss(t_node *a, t_node *b, t_info *info);
void	pa(t_node *a, t_node *b, t_info *info);
void	pb(t_node *a, t_node *b, t_info *info);
void	ra(t_node *a, t_info *info);
void	rb(t_node *b, t_info *info);
void	rr(t_node *a, t_node *b, t_info *info);
void	rra(t_node *a, t_info *info);
void	rrb(t_node *b, t_info *info);
void	rrr(t_node *a, t_node *b, t_info *info);
void	ft_sandglass(t_node *a, t_node *b, t_info *info);
void	a_to_b(t_node *a, t_node *b, t_info *info, int chunk);
void	b_to_a(t_node *a, t_node *b, t_info *info);
int		prev_sorted(t_node *a);
void	size_three_sort(t_node *a, t_info *info);
void	size_four_sort(t_node *a, t_node *b, t_info *info);
void	size_five_sort(t_node *a, t_node *b, t_info *info);
void	free_node(t_node *a, t_node *b, t_info *info);

#endif

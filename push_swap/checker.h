/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewopar <jaewopar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:11:50 by jaewopar          #+#    #+#             */
/*   Updated: 2022/07/30 16:16:01 by jaewopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <stdlib.h>
# include <unistd.h>
# include "push_swap.h"
# define BUFFER_SIZE 5

char	*get_next_line(int fd);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	push_swap_checker(char *s, t_node *a, t_node *b, t_info *info);
void	ft_checker(t_node *a, t_node *b, t_info *info);
void	sa_checker(t_node *a, t_info *info);
void	sb_checker(t_node *b, t_info *info);
void	ss_checker(t_node *a, t_node *b, t_info *info);
void	pa_checker(t_node *a, t_node *b, t_info *info);
void    pb_checker(t_node *a, t_node *b, t_info *info);
void	ra_checker(t_node *a, t_info *info);
void	rb_checker(t_node *b, t_info *info);
void	rr_checker(t_node *a, t_node *b, t_info *info);
void	rra_checker(t_node *a, t_info *info);
void	rrb_checker(t_node *b, t_info *info);
void	rrr_checker(t_node *a, t_node *b, t_info *info);

#endif

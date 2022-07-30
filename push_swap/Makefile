# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaewopar <jaewopar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/29 14:21:38 by jaewopar          #+#    #+#              #
#    Updated: 2022/07/30 16:19:23 by jaewopar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

NAME_LIBFT = libft/

BONUS = checker

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRCS = 	push_swap.c \
		push_swap_utils.c \
		push_swap_utils2.c \
		push_swap_pattern.c \
		push_swap_pattern2.c \
		push_swap_pattern3.c \
		ft_sort.c \
		ft_sandglass.c

BONUS_SRCS = get_next_line.c \
			 get_next_line_utils.c \
			 push_swap_utils.c \
			 push_swap_utils2.c \
			 push_swap_pattern.c \
			 push_swap_pattern2.c \
			 push_swap_pattern3.c \
			 checker_pattern.c \
			 checker_pattern2.c \
			 checker_pattern3.c \
			 ft_sort.c \
			 checker.c

OBJS = $(SRCS:.c=.o) 

BONUS_OBJS = $(BONUS_SRCS:.c=.o)

all: $(NAME)

bonus : $(BONUS)

%.o: %.c
	$(CC) $(CFLAGS) -g3 -c $< -o $@

$(NAME): $(OBJS)
	make -C $(NAME_LIBFT)
	$(CC) $(CFLAGS) -o $@ $(OBJS) -L./$(NAME_LIBFT) -lft

$(BONUS): $(BONUS_OBJS)
	make -C $(NAME_LIBFT)
	$(CC) $(CFLAGS) -o $@ $(BONUS_OBJS) -L./$(NAME_LIBFT) -lft

clean:
	rm -f $(OBJS) $(BONUS_OBJS)
	make -C $(NAME_LIBFT) clean

fclean: clean
	rm -f $(NAME) $(BONUS) $(NAME_LIBFT)libft.a

re: fclean all

.PHONY: all clean fclean re bonus

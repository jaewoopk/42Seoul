# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaewopar <jaewoopk000@naver.com>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/05 17:33:26 by jaewopar          #+#    #+#              #
#    Updated: 2022/07/05 19:13:15 by jaewopar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
NAME_LIBFT = libft/
CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRCS = 	push_swap.c \
		push_swap_pattern.c \
		push_swap_pattern2.c \
		push_swap_pattern3.c

OBJS = $(SRCS:.c=.o) 

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -g3 -c $< -o $@

$(NAME): $(OBJS)
	make -C $(NAME_LIBFT)
	$(CC) $(CFLAGS) -o $@ $(OBJS) -L./$(NAME_LIBFT) -lft

clean:
	rm -f $(OBJS)
	make -C $(NAME_LIBFT) clean

fclean: clean
	rm -f $(NAME) $(NAME_LIBFT)libft.a

re: fclean all

.PHONY: all clean fclean re

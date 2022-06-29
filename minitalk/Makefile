# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaewopar <jaewoopk000@naver.com>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/29 16:45:23 by jaewopar          #+#    #+#              #
#    Updated: 2022/06/29 17:00:54 by jaewopar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = server client

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS = server.c \
	   client.c

OBJS = $(SRCS:.c=.o)

all:	$(NAME)

bonus:	$(NAME)

server: server.o libft
	$(CC) -o $@ $< -Llibft -lft

client: client.o libft
	$(CC) -o $@ $< -Llibft -lft

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

libft:
	make -C libft

clean:
	rm -f $(OBJS)
	make -C libft clean

fclean: clean
	rm -f $(NAME) libft/libft.a

re: fclean all

.PHONY: all bonus libft clean fclean re

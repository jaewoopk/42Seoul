# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaewopar <jaewoopk000@naver.com>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/29 16:45:23 by jaewopar          #+#    #+#              #
#    Updated: 2022/06/29 18:49:51 by jaewopar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_SERVER = server

NAME_CLIENT = client

NAME_LIBFT = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS_SERVER = server.c

SRCS_CLIENT = client.c

OBJS_SERVER = $(SRCS_SERVER:.c=.o)

OBJS_CLIENT = $(SRCS_CLIENT:.c=.o)

all:	$(NAME_LIBFT) $(NAME_SERVER) $(NAME_CLIENT)

bonus:	$(NAME_LIBFT) $(NAME_SERVER) $(NAME_CLIENT)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME_LIBFT):
	make -C libft

$(NAME_SERVER): $(OBJS_SERVER) $(NAME_LIBFT)
	$(CC) $(CFLAGS) $< -o $@ -L./libft -lft

$(NAME_CLIENT): $(OBJS_CLIENT) $(NAME_LIBFT)
	$(CC) $(CFLAGS) $< -o $@ -L./libft -lft

clean:
	rm -f $(OBJS_SERVER) $(OBJS_CLIENT)
	make -C libft clean

fclean: clean
	rm -f $(NAME_SERVER) $(NAME_CLIENT) libft/libft.a

re: fclean all

.PHONY: all bonus clean fclean re

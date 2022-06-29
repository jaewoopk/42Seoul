# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaewopar <jaewoopk000@naver.com>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/29 16:45:23 by jaewopar          #+#    #+#              #
#    Updated: 2022/06/29 21:32:07 by jaewopar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_SERVER = server
NAME_CLIENT = client
NAME_LIBFT = libft/

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS_SERVER = server.c
SRCS_CLIENT = client.c

OBJS_SERVER = $(SRCS_SERVER:.c=.o)
OBJS_CLIENT = $(SRCS_CLIENT:.c=.o)

all:	$(NAME_SERVER) $(NAME_CLIENT)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME_SERVER): $(OBJS_SERVER)
	make -C $(NAME_LIBFT)
	$(CC) $(CFLAGS) -o $@ $(OBJS_SERVER) -L./libft -lft

$(NAME_CLIENT): $(OBJS_CLIENT)
	$(CC) $(CFLAGS) -o $@ $(OBJS_CLIENT) -L./libft -lft

clean:
	rm -f $(OBJS_SERVER) $(OBJS_CLIENT)
	make -C $(NAME_LIBFT) clean

fclean: clean
	rm -f $(NAME_SERVER) $(NAME_CLIENT) $(NAME_LIBFT)libft.a

re: fclean all

.PHONY: all clean fclean re

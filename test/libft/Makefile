.SUFFIX: .c.o

CC = gcc

CFLAGS = -Wall -Wextra -Werror

HEADER = includes/

SRCS = $(wildcard ./srcs/*.c)

OBJS = $(SRCS:.c=.o)

NAME = libft.a

all:	$(NAME)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@ -I $(HEADER)

$(NAME): $(OBJS)

	ar -rc $@ $(OBJS)

clean:

	rm -f $(OBJS)

fclean:

	rm -f $(NAME)

re: fclean all

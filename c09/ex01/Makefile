NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I includes/

SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS = srcs/ft_putchar.o srcs/ft_swap.o srcs/ft_putstr.o srcs/ft_strlen.o srcs/ft_strcmp.o

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

srcs/ft_putchar.o: srcs/ft_putchar.c includes/ft.h
	$(CC) $(CFLAGS) -c srcs/ft_putchar.c -o srcs/ft_putchar.o $(INCLUDES)

srcs/ft_swap.o: srcs/ft_swap.c includes/ft.h
	$(CC) $(CFLAGS) -c srcs/ft_swap.c -o srcs/ft_swap.o $(INCLUDES)

srcs/ft_putstr.o: srcs/ft_putstr.c includes/ft.h
	$(CC) $(CFLAGS) -c srcs/ft_putstr.c -o srcs/ft_putstr.o $(INCLUDES)

srcs/ft_strlen.o: srcs/ft_strlen.c includes/ft.h
	$(CC) $(CFLAGS) -c srcs/ft_strlen.c -o srcs/ft_strlen.o $(INCLUDES)

srcs/ft_strcmp.o: srcs/ft_strcmp.c includes/ft.h
	$(CC) $(CFLAGS) -c srcs/ft_strcmp.c -o srcs/ft_strcmp.o $(INCLUDES)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

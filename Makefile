NAME = libftprintf.a

SRCS = ft_printf.c ft_putnbr_fd.c ft_strlen.c ft_putchar_fd.c
OBJS = $(SRCS:.c=.o)
HEADER = ./inc/ft_printf.h
all: $(NAME)

$(NAME):
	cc -Wall -Werror -Wextra -I $(HEADER) -c $(SRCS)
	ar rc $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re : fclean all

NAME = libftprintf.a

SRCS = ft_printf.c ft_putnbr_fd.c ft_strlen.c ft_putchar_fd.c ft_convertion.c ft_char_conv.c ft_int_conv.c ft_intlen.c ft_ptr_conv.c ft_putbase.c ft_str_conv.c ft_unsg_conv.c
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

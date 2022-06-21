NAME = libftprintf.a

SRCS = ./src/ft_printf.c \
 				./src/ft_strlen.c \
				./src/ft_putchar_fd.c \
				./src/ft_char_conv.c \
				./src/ft_int_conv.c \
				./src/ft_intlen.c \
				./src/ft_ptr_conv.c \
				./src/ft_putbase.c \
				./src/ft_str_conv.c \
				./src/ft_unsg_conv.c \

OBJS = $(SRCS:.c=.o)
HEADER = ./inc/ft_printf.h
all: $(NAME)

$(NAME):
	cc -Wall -Werror -Wextra -I $(HEADER) -c $(SRCS)
	mv *.o ./src/
	ar rcs $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re : fclean all

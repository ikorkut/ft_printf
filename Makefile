NAME= libftprintf.a

SRCS= ft_printf.c ft_process.c

OBJS= $(SRCS:.c=.o)

CC= gcc

RM= rm -rf

CFLAGS= -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)
		ar rc $(NAME) $(OBJS)
clean:
		$(RM) $(OBJS)
fclean: clean
		$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re
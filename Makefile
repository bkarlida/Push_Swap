SRCS			=	rotate_func.c error_check.c ft_atoi.c ft_split.c push_func.c push_swap.c \
					reverse_rotate.c arg_to_int.c \
					swap_func.c push_utils.c sort.c radix.c

OBJS			=	$(SRCS:.c=.o)

NAME			=	push_swap

CC				=	gcc

CFLAGS			=	-Wall -Wextra -Werror

RM				=	rm -rf

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:			
				$(RM) $(OBJS)

fclean:			clean
						$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
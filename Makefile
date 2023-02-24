SRCS = args_to_int.c \
       indexing_stack.c \
	   join_args.c \
	   linked_list.c \
	   maxmin.c \
	   parcing.c \
	   push.c \
       putstr.c \
	   rotate.c \
	   sort3numbers.c \
	   sort5numbers.c \
	   sort100numbers.c \
	   split_args.c \
	   swap.c \

NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
HEADER = push_swap.h
OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o : %.c $(HEADER)
		$(CC) $(CFLAGS) -c $< -o $@

clean : 
		rm -rf $(OBJS)
fclean : clean
		rm -rf $(NAME)
re : clean fclean all
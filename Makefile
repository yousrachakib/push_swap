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
	   sort500numbers.c
NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
HEADER = push_swap.h
OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)  $(HEADER)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
bonus :
	$(MAKE) -C bonus

%.o : %.c $(HEADER)
		@$(CC) $(CFLAGS) -c $< -o $@

clean : 
		rm -rf $(OBJS)
		$(MAKE) clean  -C bonus
fclean : clean
		rm -rf $(NAME)
		$(MAKE) fclean  -C bonus
re : clean fclean all

.PHONY : all bonus clean fclean re
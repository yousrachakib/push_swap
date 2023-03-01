SRCS = args_to_int.c \
       bonus_utils.c \
	   get_next_line.c \
	   get_next_line_utils.c \
	   checker.c \
	   join_args.c \
	   parcing.c \
	   push.c \
       putstr.c \
	   rotate.c \
	   split_args.c \
	   swap.c 
NAME = checker
CC = cc
CFLAGS = -Wall -Wextra -Werror
HEADER = bonus.h
OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o : %.c $(HEADER)
		@$(CC) $(CFLAGS) -c $< -o $@

clean : 
		rm -rf $(OBJS)
fclean : clean
		rm -rf $(NAME)
re : clean fclean all
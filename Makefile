CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = parcins.c split_args.c linked_list.c join_args.c args_to_int.c

HEADER = push_swap.h

NAME = push_swap.a

OBJ = $(SRC:.c=.o)

all : 

$(NAME) : 
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

NAME = libft.a
AR = ar rcs
CC = cc
FLAGS = -Wall -Wextra -Werror
INC = -I.
SRCS = $(wildcard ft_*.c)
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	$(AR) $@ $^

%.o : %.c libft.h
	$(CC) $(FLAGS) $(INC) -c $< -o $@

clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

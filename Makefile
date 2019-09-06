SRCS = srcs/*.c
NAME = libft.a
OBJECTS = *.o

HEADER = libft.h
all: $(NAME)
$(NAME):
	gcc  -I $(HEADER) -Wall -Wextra -Werror -c $(SRCS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)
clean:
	rm -f $(OBJECTS)
fclean: clean
	rm -f $(NAME)
re:	fclean all

##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## duo_stumper
##

SRC =		main.c	\
		./src/file_content.c	\
		./src/tree.c

LIB =		./lib/my_put_in_list.c	\
		./lib/my_putstr.c

SRC_TESTS =	

OBJ =		$(SRC:.c=.o)

NAME =		tree

NAME_TESTS =	unit_test

IFLAGS	=	-I include

CRIFLAGS = -lcriterion --coverage

all:
		gcc -o $(NAME) $(SRC) $(IFLAGS) $(LIB)

tests_run:
		gcc -o $(NAME_TESTS) $(SRC_TESTS) $(IFLAGS) $(CRIFLAGS)
		./$(NAME_TESTS)
		gcovr
clean:
		rm -rf $(OBJ)

fclean:		clean
		rm -f $(NAME)
		rm -f $(NAME_TESTS)

re:		fclean all

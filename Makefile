##
## EPITECH PROJECT, 2019
## navy
## File description:
## project
##

NAME	=	navy

SRC	=	src/main.c 		\
		src/start.c		\
<<<<<<< HEAD
		src/error_handling.c	\
		src/display_h.c		\
		lib/my_strlen.c		\
		lib/my_putchar.c	\
		lib/my_putstr.c
=======
		src/display_h.c		\
		src/my_putchar.c	\
		src/my_putstr.c
>>>>>>> fc5cf7327d51da7b9dcf77f1ad7fc782759f3d3f

CC	=	gcc

DEFLAGS	=	-W -Wextra -Wall -g3

CPPFLAGS=	-I./include/

CFFLAGS	=	tests/unit_tests.c -I./include --coverage -lcriterion

OBJ	=	$(SRC:.c=.o)

all	:	$(OBJ)
		$(CC) $(DEFLAGS) -o $(NAME) $(OBJ) $(CPPFLAGS)

tests_run	:
		$(CC) -o unit_tests lib/my/*.c $(CFFLAGS)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)
		rm -f *# \
		rm -f src/*# \
		rm -f include/*# \
		rm -f *~ \
		rm -f src/*~ \
		rm -f include/*~ \
		rm -f *.gcda \
		rm -f *.gcno

re	:	fclean all

.PHONY	:	all tests_run clean fclean re

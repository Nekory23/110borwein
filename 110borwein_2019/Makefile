##
## EPITECH PROJECT, 2020
## 110borwein
## File description:
## Makefile
##

NAME	=	110borwein

SRC	=	src/main.c 		\
		src/start.c		\
		src/error_handling.c	\
		src/util_functions.c	\
		src/compute.c

TEST	=	src/start.c		\
		src/error_handling.c	\
		src/util_functions.c	\
		src/compute.c

CC	?=	gcc

CFLAGS	=	-W -Wextra -Wall

CPPFLAGS	=	-I./include/

LDFLAGS	=	-lm

CFFLAGS	=	tests/unit_tests.c -I./include --coverage -lcriterion

OBJ	=	$(SRC:.c=.o)

name	:	all

all	:	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

tests_run	:
		$(CC) -o unit_tests $(TEST) $(CFFLAGS) $(LDFLAGS)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)		\
		rm -f *# 		\
		rm -f src/*# 		\
		rm -f include/*# 	\
		rm -f *~ 		\
		rm -f src/*~ 		\
		rm -f include/*~ 	\
		rm -f *.gcda 		\
		rm -f *.gcno		\
		rm -f unit_tests

re	:	fclean all

.PHONY	:	name all debug tests_run clean fclean re

##
## EPITECH PROJECT, 2022
## NANO
## File description:
## Makefile
##

CC	=	g++

CXXFLAGS	=	-W -Wall -Wextra -std=c++20 -g3 -I./include

CRIFLAG	=	-l criterion --coverage

SRC	=	src/main.cpp \
		src/Passager.cpp \
    	src/Vol.cpp \

SRC_TEST = tests/tests.cpp \
			src/Parser.cpp \
			src/Factory.cpp \
			src/Commands.cpp

OBJ	=	$(SRC:.cpp=.o)

NAME	=	tp1

NAME_TEST=	unit_test

all:	$(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CXXFLAGS)

gcc_test:
	$(CC) $(SRC_TEST) -o $(NAME_TEST) $(CRIFLAG) -I./include
	./$(NAME_TEST) --verbose

clean:
	rm -rf $(OBJ)
	rm -f *.gcda
	rm -f *.gcno
	rm -f vgcore*

fclean:	clean
	rm -rf $(NAME)
	rm -f $(NAME_TEST)

tests_run: fclean gcc_test

re:	fclean
	make -C . all
SRC	=	main.cpp \
		Player.cpp

NAME=	cpp

CC	=	g++

IFLAG	=	-I /include

WFLAGS	=	-Wall -Werror -Wextra -W

all:
	$(CC) $(SRC) -o $(NAME) $(IFLAG) $(WFLAGS)

clean:
	rm -rf vg*
	rm -rf *.o

fclean:
	rm -rf $(NAME)

re:
	fclean all

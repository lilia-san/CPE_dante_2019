##
## EPITECH PROJECT, 2019
## my_makefile
## File description:
## makefile
##

SRC	=	$(shell find src/ -name '*.c')

OBJ	=	$(SRC:.c=.o)

NAME	=	solver

all: $(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)


fclean:	clean
	rm -f $(NAME)
	rm -f *~

re:	fclean all

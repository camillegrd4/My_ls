##
## EPITECH PROJECT, 2019
## make
## File description:
## make
##

SRC	=		src/my_ls.c \
			src/main.c \

CFLAGS	=	-I ./include

OBJ	=	$(SRC:.c=.o)

NAME	=	my_ls

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS) -lncurses
	@rm -rf $(OBJ)

debug:	$(OBJ)
	gcc -o debug $(OBJ) $(CFLAGS) -g

re:	fclean all

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
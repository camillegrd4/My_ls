##
## EPITECH PROJECT, 2019
## make
## File description:
## make
##

SRC	=		src/my_ls.c \
			src/main.c \
			lib/my_getnbr.c \
			lib/my_put_nbr.c \
			lib/my_putchar.c \
			lib/my_putstr.c \
			lib/my_strlen.c \
			src/my_lsl.c \
			lib/my_strcat.c \
			lib/my_strcmp.c \
			lib/my_strcpy.c \
			lib/concat_params.c \

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
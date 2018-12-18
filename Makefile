######################################################
#                                                    #
#         Makefile is created by anyvchyk            #
#                for printf project                  #
#                                                    #
######################################################

SRC		= main.c

OBJ		= $(SRC:.c=.o)

NAME	= libftprintf.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

$(OBJ): $(SRC)
	gcc -Wall -Wextra -Werror -c $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

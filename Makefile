##
## EPITECH PROJECT, 2022
## B-OOP-400-STG-4-1-tekspice-matteo.murgolo
## File description:
## Makefile
##

SRC		= main.cpp \
		Terminal.cpp \
		Parse.cpp \
		Functions.cpp \


NAME	=	nanotekspice

all:	$(NAME)
	make clean


$(NAME):
	g++ -o $(NAME) $(SRC) -g

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re
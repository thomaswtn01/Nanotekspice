##
## EPITECH PROJECT, 2022
## B-OOP-400-STG-4-1-tekspice-matteo.murgolo
## File description:
## Makefile
##

SRC		= main.cpp \
		Component/Clock.cpp \
		Component/False.cpp \
		Component/Input.cpp \
		Component/Output.cpp \
		Component/True.cpp \
		Pin/ManagerofPin.cpp \
		Pin/Pin_in.cpp \
		Pin/Pin_out.cpp \
		Pin/Pin.cpp \
		CreateComponent.cpp \
		Functions.cpp \
		Parse.cpp \
		Shell.cpp \


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
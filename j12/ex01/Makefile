# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: naplouvi <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/07/19 11:15:08 by naplouvi     #+#   ##    ##    #+#        #
#    Updated: 2018/07/19 22:44:44 by naplouvi    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = ft_cat

FLAGS = -Wall -Wextra -Werror

FILES = fcts.c main.c ft_cat.c ft_print_error.c

HEADER = header.h

OBJ = fcts.o main.o ft_cat.o ft_print_error.o

all: $(NAME)

$(NAME): $(OBJ)
	gcc $(FLAGS) -o $(NAME) $(OBJ)

fcts.o: fcts.c
	gcc $(FLAGS) -c fcts.c -I $(HEADER)

ft_putchar.o : fcts.c
	gcc $(FLAGS) -c ft_putchar.c -I $(HEADER)

main.o : main.c
	gcc $(FLAGS) -c main.c -I $(HEADER)

ft_cat.o : ft_cat.c
	gcc $(FLAGS) -c ft_cat.c -I $(HEADER)

ft_print_error.o: ft_print_error.c
	gcc $(FLAGS) -c ft_print_error.c -I $(HEADER)
clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

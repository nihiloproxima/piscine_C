# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: naplouvi <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/07/18 10:44:51 by naplouvi     #+#   ##    ##    #+#        #
#    Updated: 2018/07/18 20:40:39 by naplouvi    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = ft_display_file

FILES = main.c fcts.c

OBJ = main.o fcts.o

FLAGS = -Wall -Werror -Wextra

INCLUDE = header.h

all: $(NAME)

$(NAME): $(OBJ)
	gcc $(FLAGS) -o $(NAME) $(OBJ)

main.o: main.c
	gcc $(FLAGS) -c main.c -I $(INCLUDE)

fcts.o: fcts.c
	gcc $(FLAGS) -c fcts.c -I $(INCLUDE)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all


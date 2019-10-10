# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mstupnik <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/03 18:57:53 by mstupnik          #+#    #+#              #
#    Updated: 2019/10/09 11:17:56 by mstupnik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all:
	make -C libft/
	clang -Wall -Wextra -Werror -I libft/includes -o get_next_line.o -c get_next_line.c
	clang -Wall -Wextra -Werror -I libft/includes -o main.o -c main.c
	clang -o test_gnl main.o get_next_line.o -I libft/includes -L libft/ -lft

clean:
	rm -rf *.o
	rm -rf test_gnl

fclean: clean
	make -C libft/ fclean

re: fclean all

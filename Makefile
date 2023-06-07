# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/01 18:13:47 by ecaruso           #+#    #+#              #
#    Updated: 2023/06/03 17:02:32 by ecaruso          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
PRINTF = ft_printf/libftprintf.a
LIBFT = libft/libft.a
SRC = \
main.c

OBJ = $(SRC:%.c=%.o)
FLAGS = -Wall -Wextra -Werror
GCC = gcc -c
all : $(NAME)

$(NAME) : $(OBJ)
			make -C libft all bonus
			make -C ft_printf all
			$(GCC) $(FLAGS) $(SRC) -I
			ar rcs $(NAME) $(OBJ)

clean :
		make -C libft clean
		make -C ft_printf clean
		rm -f $(OBJ)

fclean : clean
		make -C libft fclean
		make -C ft_printf fclean
		rm -f $(NAME)

re : fclean all
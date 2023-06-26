# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/01 18:13:47 by ecaruso           #+#    #+#              #
#    Updated: 2023/06/26 17:10:29 by ecaruso          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
PRINTF = ft_printf/libftprintf.a
LIBFT = libft/libft.a
SRC = \
main.c \
stack_init.c \
error_free.c \
utils.c \
split.c \
tiny_sort.c \
push_command.c \
swap_command.c \
rotate_command.c \
reverse_rotate.c \
push_swap_init.c \
push_swap_command.c

OBJ = $(SRC:%.c=%.o)
FLAGS = -Wall -Wextra -Werror

%.o: %.c
	$(CC) -Wall -Wextra -Werror -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
			make -C libft all bonus
			make -C ft_printf all
			$(CC) $(FLAGS) $(OBJ) $(LIBFT) $(PRINTF) -o $(NAME)

clean :
		make -C libft clean
		make -C ft_printf clean
		rm -f $(OBJ)

fclean : clean
		make -C libft fclean
		make -C ft_printf fclean
		rm -f $(NAME)

re : fclean all
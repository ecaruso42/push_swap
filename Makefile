# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/01 18:13:47 by ecaruso           #+#    #+#              #
#    Updated: 2023/07/06 17:46:18 by ecaruso          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
NAME_BONUS = checker
PRINTF = ft_printf/libftprintf.a
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
SRCBONUS = \
checker_bonus.c \
get_next_line_bonus.c \
get_next_line_utils_bonus.c \
split.c \
push_command.c \
rotate_command.c \
reverse_rotate.c \
swap_command.c \
stack_init.c \
utils.c \
error_free.c \
tiny_sort.c \
push_swap_command.c \
push_swap_init.c \

CC = gcc
OBJBONUS = $(SRCBONUS:%.c=%.o)
OBJ = $(SRC:%.c=%.o)
FLAGS = -Wall -Wextra -Werror

%.o: %.c
	$(CC) -Wall -Wextra -Werror -c $< -o $@

all : $(NAME)

bonus : $(NAME_BONUS)
		make -C ft_printf all
		$(CC) $(FLAGS) $(SRCBONUS) $(PRINTF) -o $(NAME_BONUS)

$(NAME) : $(OBJ)
			make -C ft_printf all
			$(CC) $(FLAGS) $(OBJ) $(PRINTF) -o $(NAME)

$(NAME_BONUS) : $(OBJBONUS)

clean :
		make -C ft_printf clean
		rm -f $(OBJ) $(OBJBONUS)

fclean : clean
		make -C ft_printf fclean
		rm -f $(NAME)
		rm -f $(NAME_BONUS)

re : fclean all
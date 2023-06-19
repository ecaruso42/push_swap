/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:13:51 by ecaruso           #+#    #+#             */
/*   Updated: 2023/06/19 17:17:13 by ecaruso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include "./ft_printf/ft_printf.h"
# include "./libft/libft.h"

typedef struct s_stack_node
{
	int				value;
	int				current_position;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}				t_stack_node;

int				main(int argc, char **argv);
void			stack_init(t_stack_node **a, char **argv, bool flag_argc_2);
void			append_node(t_stack_node **stack, int nbr);
void			error_free(t_stack_node **a, char **argv, bool flag_argc_2);
int				error_syntax(char *argv);
void			matrix_free(char **argv);
int				error_repetition(t_stack_node *a, int nbr);
long			ft_atol(const char *str);
t_stack_node	*find_last_node(t_stack_node *head);
void			stack_free(t_stack_node **stack);
int				strcmp(const char* str1, const char* str2);
char			**ft_split_swap(char *str, char separator);

#endif
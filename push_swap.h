/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:13:51 by ecaruso           #+#    #+#             */
/*   Updated: 2023/06/12 19:09:41 by ecaruso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

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
void			stack_init(t_stack_node **a, char **argv);
void			append_node(t_stack_node **stack, int nbr);
int				error_syntax(char **argv);
void			matrix_free(char **argv);
int				error_repetition(t_stack_node *a, int nbr);
long			ft_atol(const char *str);
t_stack_node	*find_last_node(t_stack_node *head);
void			stack_free(t_stack_node **stack);

#endif
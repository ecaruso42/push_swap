/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:13:51 by ecaruso           #+#    #+#             */
/*   Updated: 2023/06/25 19:09:15 by ecaruso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include "./ft_printf/ft_printf.h"
# include "./libft/libft.h"

typedef struct s_stack_node
{
	int					value;
	int					current_position;
	bool				above_median;
	struct s_stack_node *target_node;
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
char			**ft_split_swap(char *str, char separator);
bool			stack_sorted(t_stack_node *stack);
int				stack_len(t_stack_node *stack);
void			sa(t_stack_node **a, bool checker);
void			sb(t_stack_node **b, bool checker);
void			ss(t_stack_node **a, t_stack_node **b, bool checker);
void			ra(t_stack_node **a, bool checker);
void			rb(t_stack_node **b, bool checker);
void			rr(t_stack_node **a, t_stack_node **b, bool checker);
void			rra(t_stack_node **a, bool checker);
void			rrb(t_stack_node **b, bool checker);
void			rrr(t_stack_node **a, t_stack_node **b, bool checker);
void			tiny_sort(t_stack_node **a);
void			push_swap(t_stack_node **a, t_stack_node **b);
t_stack_node	*find_smallest(t_stack_node *stack);

#endif
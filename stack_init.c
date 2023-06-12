/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 18:54:01 by ecaruso           #+#    #+#             */
/*   Updated: 2023/06/12 21:33:06 by ecaruso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_init(t_stack_node **a, char **argv)
{
	long	nbr;
	int		i;

	i = 0;
	while (argv[i])
	{
		nbr = ft_atol(argv[i]);
		if (error_syntax(argv))
		{
			ft_printf("ERROR:\nsyntax not correct");
			matrix_free(argv);
		}
		if (nbr > INT_MAX || nbr < INT_MIN)
			matrix_free(argv);
		if (error_repetition(*a, (int)nbr) == 1)
		{
			ft_printf("ERROR:\nnumber repetition");
			matrix_free(argv);
			stack_free(a);
		}
		append_node(a, (int)nbr);
		i++;
	}
}

void	append_node(t_stack_node **stack, int nbr)
{
	t_stack_node	*node;
	t_stack_node	*last_node;

	if (stack == NULL)
		return ;
	node = malloc(sizeof(t_stack_node));
	if (node == NULL)
		return ;
	node->next = NULL;
	node->value = nbr;
	if (*stack == NULL)
	{
		*stack = node;
		node->prev = NULL;
	}
	else
	{
		last_node = find_last_node(*stack);
		last_node->next = node;
		node->prev = last_node;
	}
}

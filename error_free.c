/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_free.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaruso <ecaruso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 18:00:11 by ecaruso           #+#    #+#             */
/*   Updated: 2023/06/12 19:55:27 by ecaruso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	matrix_free(char **argv)
{
	while (*argv)
	{
		free(argv);
		argv++;
	}
	ft_printf("ERROR");
	exit(1);
}

void	stack_free(t_stack_node **stack)
{
	t_stack_node	*tmp;
	t_stack_node	*current;

	if (stack == NULL)
		return ;
	current = *stack;
	while (current)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
	*stack = NULL;
	exit (1);
}

int	error_repetition(t_stack_node *a, int nbr)
{
	if (a == NULL)
		return(0);
	while (a)
	{
		ft_printf("check");
		if (a->value == nbr)
			return (1);
		a = a->next;
	}
	return (0);
}

int	error_syntax(char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (argv[i])
	{
		while (argv[i][j])
		{
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 02:39:52 by omghazi           #+#    #+#             */
/*   Updated: 2024/04/05 13:41:46 by omghazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	_push(t_stack **stack_a, t_stack **stack_b)
{
	int	size;

	size = ft_lstsize(stack_a);
	if (size == 1)
		return ;
	else if (size == 2)
		sa(stack_a);
	else if (size == 3)
		sort_three(stack_a);
	else if (size == 4)
		sort_four(stack_a, stack_b);
	else if (size == 5)
		sort_five(stack_a, stack_b);
	else
	{
		heavy_sort(stack_a, stack_b);
		while ((*stack_a)->index != 0)
			rra(stack_a);
	}
}

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (ac == 1)
		return (1);
	fill_stack(&stack_a, av + 1);
	index_stack(&stack_a);
	if (!is_sorted(stack_a))
		_push(&stack_a, &stack_b);
	ft_lstclean(&stack_a);
}

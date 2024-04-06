/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 10:21:50 by omghazi           #+#    #+#             */
/*   Updated: 2024/04/04 20:08:02 by omghazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static int	swap(t_stack **stack)
{
	t_stack	*head;

	if (!stack || !*stack)
		return (0);
	head = *stack;
	ft_swap(&(head->value), &(head->next->value));
	ft_swap(&(head->index), &(head->next->index));
	return (1);
}

int	sa(t_stack **stack_a)
{
	if (!swap(stack_a))
		return (0);
	ft_putendl("sa");
	return (1);
}

int	sb(t_stack **stack_b)
{
	if (!swap(stack_b))
		return (0);
	ft_putendl("sb");
	return (1);
}

int	ss(t_stack **stack_a, t_stack **stack_b)
{
	if (!swap(stack_a))
		return (0);
	if (!swap(stack_b))
		return (0);
	ft_putendl("ss");
	return (1);
}

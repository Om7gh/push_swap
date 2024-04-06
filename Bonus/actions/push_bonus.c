/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 10:21:45 by omghazi           #+#    #+#             */
/*   Updated: 2024/04/05 14:35:40 by omghazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static int	push(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*head;

	head = *stack_a;
	*stack_a = head->next;
	head->next = NULL;
	ft_lstadd_front(stack_b, head);
	return (1);
}

int	pa(t_stack **stack_a, t_stack **stack_b)
{
	if (!push(stack_b, stack_a))
		return (0);
	ft_putendl("pa");
	return (1);
}

int	pb(t_stack **stack_a, t_stack **stack_b)
{
	if (!push(stack_b, stack_a))
		return (0);
	ft_putendl("pb");
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 15:52:45 by omghazi           #+#    #+#             */
/*   Updated: 2024/04/04 19:50:10 by omghazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_lstadd_back(t_stack **stack, t_stack *node)
{
	t_stack	*head;

	if (!stack || !node)
		return ;
	head = *stack;
	if (!head)
	{
		*stack = node;
		return ;
	}
	while (head->next)
		head = head->next;
	head->next = node;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 11:37:26 by omghazi           #+#    #+#             */
/*   Updated: 2024/03/17 23:37:18 by omghazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void sort_three(t_stack **stack)
{
    t_stack *head;
    t_stack *next;

    if (!stack || !*stack)
        return ;
    head = *stack;
    next = (*stack)->next;
    if (head->value > next->value)
    {
        if (head->value > next->next->value && next->value > next->next->value)
            (swap(stack, "sa"), reverse_rotate(stack, "rra"));
        else if (head->value > next->next->value && next->value < next->next->value)
            rotate(stack, "ra");
        else if (head->value < next->next->value)
            swap(stack, "sa");
    }
    else
    {
        if (next->value > next->next->value)
            reverse_rotate(stack, "rra");
        else
            return ;
    }
}

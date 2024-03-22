/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 21:46:03 by omghazi           #+#    #+#             */
/*   Updated: 2024/03/22 17:45:22 by omghazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void push_in_stack_b(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *temp;
    int count;

    if (!stack_a || !*stack_a)
        return;
    count = 0;
    temp = *stack_a;
    while (temp && count < 3) {
        temp = temp->next;
        count++;
    }
    while (temp)
    {
        push(stack_b, stack_a, "pb");
        temp = temp->next;
    }
}

void calcule_cost(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *head_b;
    int cost;
    int size_b;
    int size_a;

    if (!stack_a || !*stack_a || !stack_b || !*stack_b)
        return;
    head_b = *stack_b;
    cost = 0;
    size_b = ft_lstsize(stack_b);
    size_a = ft_lstsize(stack_a);
    while (head_b)
    {
        if (head_b->index < (size_b / 2))
            cost = head_b->index + head_b->target->index;
        else if (head_b->index >= (size_b / 2))
            cost = size_b - head_b->index + head_b->target->index;
        head_b->cost = cost;
        head_b = head_b->next;
    }
}

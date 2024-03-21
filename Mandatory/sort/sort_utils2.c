/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 21:46:03 by omghazi           #+#    #+#             */
/*   Updated: 2024/03/21 21:11:26 by omghazi          ###   ########.fr       */
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

    if (!stack_a || !*stack_a || !stack_b || !*stack_b)
        return;

    head_b = *stack_b;
    while (head_b)
    {
        if (!head_b->target) {
            head_b = head_b->next;
            continue;
        }
        cost = abs(head_b->index - head_b->target->index);
        cost += 1;
        head_b->cost = cost;
        head_b = head_b->next;
    }
}

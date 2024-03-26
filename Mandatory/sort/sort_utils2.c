/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 21:46:03 by omghazi           #+#    #+#             */
/*   Updated: 2024/03/25 21:49:12 by omghazi          ###   ########.fr       */
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

void cost_check(t_stack **stack)
{
    t_stack *head;
    int     i;
    int     size;

    if (!stack || !*stack)
        return ;
    head = *stack;
    i = 0;
    size = ft_lstsize(stack);
    while (head)
    {
        if (i <= size / 2)
            head->cost = i;
        else
            head->cost = size - i;
        i++;
        head = head->next;
    }
}

void total_cost(t_stack **stack_b)
{
    t_stack *head_b;

    if (!stack_b || !*stack_b)
        return ;
    head_b = *stack_b;
    while (head_b)
    {
        head_b->total_cost = head_b->target->cost + head_b->cost;
        head_b = head_b->next;
    }
}


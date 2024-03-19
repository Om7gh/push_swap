/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 03:00:07 by omghazi           #+#    #+#             */
/*   Updated: 2024/03/19 03:37:42 by omghazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"


void index_stack(t_stack **stack)
{
    t_stack *head;
    int     i;
    
    if (!stack || !*stack)
        return ;
    head = *stack;
    head->index = 0;
    i = -1;
    while (head)
    {
        i++;
        head->index += i;
        head = head->next;
    }
}

static t_stack *target(t_stack *head_b, t_stack **stack_a)
{
    t_stack *head_a;
    t_stack *stack_node;
    int     smallest_big;

    head_a = *stack_a;
    smallest_big = INT_MAX;
    while (head_a)
    {
        if (head_a->value > head_b->value && head_a->value < smallest_big)
        {
            smallest_big = head_a->value;
            stack_node = head_a;
        }
        head_a = head_a->next;
    }
    return (stack_node);
}

void    find_target(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *head;
    
    if (!stack_b || !*stack_b || !stack_a)
        return ;
    head = *stack_b;
    while (head)
    {
        head->target = target(head, stack_a);
        head = head->next;
    }
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 19:53:03 by omghazi           #+#    #+#             */
/*   Updated: 2024/03/25 00:16:43 by omghazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void ingredient(t_stack *stack_a, t_stack *stack_b)
{
    find_min(&stack_a);
    find_target(&stack_a, &stack_b);
    cost_check(&stack_a);
    cost_check(&stack_b);
    total_cost(&stack_b);
    min_cost(&stack_b);
}

void sort_stack(t_stack **stack_a, t_stack **stack_b)
{
    int     i;
    int     size_a;
    int     size_b;
    t_stack *head_a;
    t_stack *head_b;

    if (!stack_a || !*stack_a || !stack_b || !*stack_b)
        return ;
    i = 0;
    head_b = *stack_b;
    head_a = *stack_a;
    ingredient(*stack_a, *stack_b);
     size_a = ft_lstsize(stack_a);
     size_b = ft_lstsize(stack_b);
    while (head_b != head_b->node_min_cost || head_a != head_b->target->node_min_cost)
    {
        if (i <= size_a)
            rotate(&head_a, "ra");
        else
            reverse_rotate(&head_a, "rra");
        if (i <= size_b)
            rotate(&head_b, "rb");
        else
            reverse_rotate(&head_b, "rrb");
        i++;  
        ingredient(*stack_a, *stack_b);
    }
}

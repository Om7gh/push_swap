/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 02:39:52 by omghazi           #+#    #+#             */
/*   Updated: 2024/03/26 02:15:34 by omghazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int main(int ac, char **av)
{
    t_stack *stack_a;
    t_stack *stack_b;
    t_stack *min;
    t_stack *tmp;

    if (ac == 1)
        return (1);
    fill_stack(&stack_a, av + 1);
    tmp = stack_a;
    push_in_stack_b(&stack_a, &stack_b);
    sort_three(&stack_a);
    while (stack_b)
    {
        find_min(&stack_a);
        find_target(&stack_a, &stack_b);
        cost_check(&stack_a);
        cost_check(&stack_b);
        total_cost(&stack_b);
        index_stack(&stack_a);
        index_stack(&stack_b);
        min = min_cost(&stack_b);
        if (stack_a->index <= (ft_lstsize(&stack_a) / 2))
            while (stack_a->value != min->target->value)
             rotate(&stack_a, "ra");
        else
            while (stack_a->value != min->target->value)
             reverse_rotate(&stack_a, "rra");
        if (stack_b->index <= (ft_lstsize(&stack_b) / 2))
            while (stack_b->value != min->value)
             rotate(&stack_b, "ra");
        else
            while (stack_b->value != min->value)
             reverse_rotate(&stack_b, "rra");
        push(&stack_a, &stack_b, "pa");
       
    }
    while (stack_a->value != tmp->min->value)
        rotate(&stack_a, "ra");
    print_stack_a(&stack_a);
}

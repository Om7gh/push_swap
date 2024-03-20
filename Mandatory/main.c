/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 02:39:52 by omghazi           #+#    #+#             */
/*   Updated: 2024/03/19 22:33:55 by omghazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int main(int ac, char **av)
{
    int i = 0;
    t_stack *stack_a;
    t_stack *stack_b;

    if (ac == 1)
        return (1); 
    stack_a = NULL;
    stack_b = NULL;
    fill_stack(&stack_a, av + 1);
    index_stack(&stack_a);
    push_in_stack_b(&stack_a, &stack_b);
    // if (!is_sorted(&stack_a))
    // {
    //     if (stack_a->qty == 2)
    //         swap(&stack_a, "sa");
    //     else if (stack_a->qty == 3)
    //         sort_three(&stack_a);
    // }
    find_target(&stack_a, &stack_b);
    calcule_cost(&stack_b);
    printf("stack a\n");
    print_stack(&stack_a);
    printf("stack b\n");
     while (stack_b)
    {
        printf("value : %d-->", stack_b->value);
        printf("cost : %d-->", stack_b->cost);
        printf("target : %d-->", stack_b->target->index);
        printf("index : %d\n", stack_b->index);
        stack_b = stack_b->next;
    }
    ft_lstclean(&stack_a);
}

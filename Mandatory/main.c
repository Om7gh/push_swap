/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 02:39:52 by omghazi           #+#    #+#             */
/*   Updated: 2024/03/19 03:48:32 by omghazi          ###   ########.fr       */
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
    push(&stack_b, &stack_a, "pb");
    push(&stack_b, &stack_a, "pb");
    push(&stack_b, &stack_a, "pb");
    // sort_three(&stack_a);
    // index_stack(&stack_a);
    // index_stack(&stack_b);
    find_target(&stack_a, &stack_b);
    printf("stack_a\n");
    print_stack(&stack_a);
    printf("stack_b\n");
    while (stack_b)
    {
        printf("value : %d-->", stack_b->value);
        printf("target : %d-->", stack_b->target->value);
        printf("index : %d\n", stack_b->index);
         stack_b = stack_b->next;
    }
    ft_lstclean(&stack_a);
}

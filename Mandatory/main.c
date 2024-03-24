/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 02:39:52 by omghazi           #+#    #+#             */
/*   Updated: 2024/03/24 00:24:16 by omghazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int main(int ac, char **av)
{
    t_stack *stack_a;
    t_stack *stack_b;

    if (ac == 1)
        return (1); 
    stack_a = NULL;
    stack_b = NULL;

    /*---------INIT STACK AND PUSH_B ----------*/

    fill_stack(&stack_a, av + 1);
    push_in_stack_b(&stack_a, &stack_b);

    /*---------CALL MIN MAX ----------*/

    find_min(&stack_a);
    find_max(&stack_b);
    if (ft_lstsize(&stack_a) == 3)
        sort_three(&stack_a);

    /*---------FIND TARGET ----------*/

    find_target(&stack_a, &stack_b);

    /*---------FIND COST ----------*/

    cost_check(&stack_a);
    cost_check(&stack_b);
    total_cost(&stack_b);

    /*---------PRINT STACK ----------*/

    print_stack_a(&stack_a);
    print_stack_b(&stack_b);
    ft_lstclean(&stack_a);
}

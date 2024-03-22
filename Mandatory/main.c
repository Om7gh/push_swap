/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 02:39:52 by omghazi           #+#    #+#             */
/*   Updated: 2024/03/21 23:17:02 by omghazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int main(int ac, char **av)
{
    int i = 0;
    t_stack *stack_a;
    t_stack *stack_b;
    t_stack *tmp;

    if (ac == 1)
        return (1); 
    stack_a = NULL;
    stack_b = NULL;

    /*---------INIT STACK AND PUSH_B ----------*/

    fill_stack(&stack_a, av + 1);
    push_in_stack_b(&stack_a, &stack_b);
    tmp = stack_a;

    /*---------INDEX STACK ----------*/

    index_stack(&stack_a);
    index_stack(&stack_b);

    /*---------CALL MIN MAX ----------*/

    find_min(&stack_a);
    find_max(&stack_a);
    sort_three(&stack_a);
    index_stack(&stack_a);

    /*---------FIND TARGET ----------*/

    find_target(&stack_a, &stack_b);

    /*---------FIND COST ----------*/

    calcule_cost(&stack_a, &stack_b);

    /*---------PRINT STACK ----------*/
    print_stack_a(&stack_a);
    print_stack_b(&stack_b);
    ft_lstclean(&stack_a);
}

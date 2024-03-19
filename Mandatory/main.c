/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 02:39:52 by omghazi           #+#    #+#             */
/*   Updated: 2024/03/19 02:57:54 by omghazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int main(int ac, char **av)
{
    int i = 0;
    t_stack *stack_a;

    if (ac == 1)
        return (1); 
    stack_a = NULL;
    fill_stack(&stack_a, av + 1);
    sort_three(&stack_a);
    print_stack(&stack_a);
    ft_lstclean(&stack_a);
}

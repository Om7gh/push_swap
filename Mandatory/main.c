/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 02:39:52 by omghazi           #+#    #+#             */
/*   Updated: 2024/03/17 10:17:18 by omghazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void f(void)
{
    system("leaks push_swap");
}

int main(int ac, char **av)
{
    atexit(f);
    t_stack *stack_a;

    if (ac == 1)
        return (1);
    stack_a = NULL;
    fill_stack(&stack_a, av + 1);
    print_stack(&stack_a);
    ft_lstclean(&stack_a);
}

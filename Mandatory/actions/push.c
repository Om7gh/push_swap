/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 10:21:45 by omghazi           #+#    #+#             */
/*   Updated: 2024/03/17 10:39:58 by omghazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void push_a(t_stack **stack_a, t_stack **stack_b, char *str)
{
    t_stack *tmp;

    if (!stack_a || !stack_b || !*stack_b)
        return ;
    tmp = *stack_b;
    *stack_b = tmp->next;
    tmp->next = NULL;
    ft_lstadd_front(stack_a, tmp);
    ft_putendl(str);
}

void push_b(t_stack **stack_a, t_stack **stack_b, char *str)
{
    t_stack *tmp;

    if (!stack_b || !stack_a || !*stack_a)
        return ;
    tmp = *stack_a;
    *stack_a = tmp->next;
    tmp->next = NULL;
    ft_lstadd_front(stack_b, tmp);
    ft_putendl(str);
}

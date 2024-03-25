/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 10:21:43 by omghazi           #+#    #+#             */
/*   Updated: 2024/03/24 21:25:54 by omghazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void reverse_rotate(t_stack **stack, char *str)
{
    t_stack *last;
    t_stack *current;
    t_stack *prev;
    
    if (!stack || !*stack)
        return ;
    current = *stack;
    prev = NULL;
    last = NULL;
    while (current->next)
    {
        prev = current;   
        current = current->next;
    }
    last = current;
    ft_lstadd_front(stack, last);
    ft_putendl(str);
}

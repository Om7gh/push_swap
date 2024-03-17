/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 10:21:47 by omghazi           #+#    #+#             */
/*   Updated: 2024/03/17 11:24:46 by omghazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void rotate(t_stack **stack, char *str)
{
    t_stack *head;
    t_stack *prev;
    t_stack *last;
    
    if (!stack || !*stack)
        return ;
    head = *stack;
    *stack = head->next;
    last = head;
    while (last)
        last = last->next;
    head->next = NULL;
    last->next = head;
    ft_putendl(str);
}

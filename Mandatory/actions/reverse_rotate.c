/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 10:21:43 by omghazi           #+#    #+#             */
/*   Updated: 2024/03/17 11:29:27 by omghazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void reverse_rotate(t_stack **stack, char *str)
{
    t_stack *head;
    t_stack *prev;
    
    if (!stack || !*stack)
        return ;
    head = *stack;
    while (head)
    {
        prev = head;   
        head = head->next;
    }
    if (prev)
        prev->next = NULL;
    ft_lstadd_front(stack, head);
    ft_putendl(str);
}

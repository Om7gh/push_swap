/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 10:21:50 by omghazi           #+#    #+#             */
/*   Updated: 2024/03/17 23:26:19 by omghazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void swap(t_stack **stack, char *str)
{
    t_stack *head;

    if (!stack || !*stack)
        return ;
    head = *stack;
    ft_swap(&(head->value), &(head->next->value));
    ft_putendl(str);
}

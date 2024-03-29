/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 17:19:34 by omghazi           #+#    #+#             */
/*   Updated: 2024/03/25 03:42:27 by omghazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void    fill_stack(t_stack **stack, char **av)
{
    t_stack *node;
    char    **tmp;
    int     i;
    int     j;

    i = 0;
    while (av[i])
    {
        tmp = ft_split(av[i], ' ');
        j = 0;
        while (tmp[j])
        {
            is_valid(tmp[j]);
            node = ft_lstnew(ft_atoi(tmp[j]));
            if (!node)
                return ;
            ft_lstadd_back(stack, node);
            is_duplicate(stack);
            free(tmp[j]);
            j++;
        }
        free(tmp);
        i++;
    }
}

void find_min(t_stack **stack)
{
    t_stack *head;
    t_stack *min_node;
    int min;

    if (!stack || !*stack)
        return ;
    head = *stack;
    min = INT_MAX;
    while (head)
    {
        if (head->value < min)
        {
            min = head->value;
            min_node = head;
        }
        head = head->next;
    }
    head = *stack;
    head->min = min_node;
}

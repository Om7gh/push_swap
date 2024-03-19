/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 03:21:13 by omghazi           #+#    #+#             */
/*   Updated: 2024/03/19 03:47:54 by omghazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void    error()
{
    ft_putendl("Error");
    exit(1);
}

long is_overflow(long n)
{
    if (n > INT_MAX || n < INT_MIN)
        return (1);
    return (0);
}

void print_stack(t_stack **stack)
{
    t_stack *head;

    head = *stack;
    while (head)
    {
        printf("value : %d-->", head->value);
        printf("index : %d\n", head->index);
        head = head->next;
    }
}

void free_2d(char **new, int i)
{
    int size;

    size = 0;
    while (size < i)
    {
        free(new[size]);
        size++;
    }
    free(new);
    error();
}

void ft_swap(int *x, int *y)
{
    int tmp;

    tmp = *x;
    *x = *y;
    *y = tmp;
}
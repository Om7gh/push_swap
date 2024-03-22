/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 03:21:13 by omghazi           #+#    #+#             */
/*   Updated: 2024/03/21 21:51:49 by omghazi          ###   ########.fr       */
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

void print_stack_a(t_stack **stack)
{
    t_stack *head;

    printf("\n");
    head = *stack;
    printf("\033[0;32mstack A :\n");
    while (head)
    {
        printf("\033[0;32mvalue : %3d | ", head->value);
        printf("\033[0;32mindex : %3d\n", head->index);
        head = head->next;
    }
    printf("\n");
}

void print_stack_b(t_stack **stack)
{
    t_stack *head;

    head = *stack;
     printf("\033[0;34mstack B :\n");
     while (head)
    {
        printf("\033[0;34mvalue  : %3d | ", head->value);
        printf("\033[0;34mtarget : %3d | ", head->target->value);
        printf("\033[0;34mcost  : %3d | ", head->cost);
        printf("\033[0;34mindex  : %3d\n", head->index);
        head = head->next;
    }
    printf("\n");
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 02:38:45 by omghazi           #+#    #+#             */
/*   Updated: 2024/03/19 22:26:51 by omghazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

/*------------Struct----------*/
typedef struct s_stack
{
    int value;
    int index;
    int qty;
    int min;
    int max;
    int cost;
    struct s_stack *target;
    struct s_stack *next;
}   t_stack;

/*------------Utils----------*/
void        error();
long        is_overflow(long n);
void        ft_putendl(char *s);
void        print_stack(t_stack **stack);
void        free_2d(char **new, int i);
void        is_duplicate(t_stack **stack);
void        is_valid(char *av);
void        ft_swap(int *x, int *y);

/*------------Libft----------*/
t_stack     *ft_lstnew(int value);
void        ft_lstadd_back(t_stack **stack, t_stack *node);
void        ft_lstclean(t_stack **stack);
void        ft_lstadd_front(t_stack **stack, t_stack *node);
char        **ft_split(char *s, char c);
int         ft_atoi(char *s);

/*------------Parse----------*/
void        fill_stack(t_stack **stack, char **av);

/*------------Sort----------*/
void        sort_three(t_stack **stack);
void        index_stack(t_stack **stack);
void        find_target(t_stack **stack_a, t_stack **stack_b);
int         is_sorted(t_stack **stack);
void        find_min(t_stack **stack);
void        find_max(t_stack **stack);
void        push_in_stack_b(t_stack **stack_a, t_stack **stack_b);
void        calcule_cost(t_stack **stack_b);

/*------------Actions----------*/
void        swap(t_stack **stack, char *str);
void        push(t_stack **stack_a, t_stack **stack_b, char *str);
void        reverse_rotate(t_stack **stack, char *str);
void        rotate(t_stack **stack, char *str);

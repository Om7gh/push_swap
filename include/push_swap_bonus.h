/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 14:14:49 by omghazi           #+#    #+#             */
/*   Updated: 2024/04/05 23:49:57 by omghazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include "get_next_line.h"

typedef struct s_stack
{
	int					value;
	int					position;
	int					index;
	int					length;
	struct s_stack		*max;
	struct s_stack		*min;
	struct s_stack		*next;
}	t_stack;

/*-------------------Actions----------------*/
int	pa(t_stack **stack_a, t_stack **stack_b);
int	pb(t_stack **stack_a, t_stack **stack_b);
int	rra(t_stack **stack);
int	rrb(t_stack **stack);
int	rrr(t_stack **stack_a, t_stack **stack_b);
int	sa(t_stack **stack_a);
int	ss(t_stack **stack_a, t_stack **stack_b);
int	sb(t_stack **stack_b);
int	rb(t_stack **stack);
int	ra(t_stack **stack);
int	rr(t_stack **stack_a, t_stack **stack_b);

/*-------------------Utils----------------*/
void	error(void);
int		is_overflow(long n);
void	free_2d(char **new, int i);
void	ft_swap(int *x, int *y);
int		is_space(char c);
void	ft_putendl(char *s);
int	check_value(char c);
bool	is_valid(char *av);
bool	is_duplicate(t_stack **stack);

char	**ft_split(char *s);
int	ft_strncmp(char *s1, char *s2, int n);
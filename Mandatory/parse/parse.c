/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 17:19:34 by omghazi           #+#    #+#             */
/*   Updated: 2024/04/04 22:22:58 by omghazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void	push_and_check(t_stack **stack, char **av, char **tmp, int j)
{
	while (tmp[++j])
	{
		if (!is_valid(tmp[j]))
			error();
		if (ft_atoi(tmp[j]) == LONG_MAX)
			(free_2d(tmp, j), ft_lstclean(stack), error(stack, av, j));
		ft_lstadd_back(stack, ft_lstnew(ft_atoi(tmp[j])));
		(*stack)->length += 1;
		free(tmp[j]);
		if (!is_duplicate(stack))
			(ft_lstclean(stack), free_2d(tmp, j), error());
	}
	free(tmp);
}

void	fill_stack(t_stack **stack, char **av)
{
	char		**tmp;
	int			i;
	long		j;

	i = -1;
	while (av[++i])
	{
		tmp = ft_split(av[i], ' ');
		if (!tmp)
		{
			free_2d(av, i);
			ft_lstclean(stack);
			error();
		}
		j = -1;
		push_and_check(stack, av, tmp, j);
	}
}

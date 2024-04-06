/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 14:14:15 by omghazi           #+#    #+#             */
/*   Updated: 2024/04/06 00:10:08 by omghazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap_bonus.h"

int	read_actions(t_stack **stack)
{
	char	*action;
	char	*input;
	char	**spl;

	input = "sa sb ss ra rb rr rra rrb rrr pa pb";
	spl = ft_split(input);
	while (true)
	{
		action = get_next_line(0);
		while (*spl)
		{
			if (ft_strncmp(*spl, action, strlen(action)) == 0)
				return (0);
			else
				break;
			spl++;
		}
		if (!action)
			break ;
	}
}

int	main(int ac, char **av)
{
	return (0);
}

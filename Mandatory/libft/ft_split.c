/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 02:41:54 by omghazi           #+#    #+#             */
/*   Updated: 2024/04/04 22:31:32 by omghazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static unsigned int	count_word(char *s, char c)
{
	char	last;
	int		i;
	int		words;

	last = c;
	i = 0;
	words = 0;
	while (s[i])
	{
		if (last == c && s[i] != c)
			words++;
		last = s[i];
		i++;
	}
	return (words);
}

static unsigned int	word_len(char *s)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != ' ' || s[len] != '\t')
		len++;
	return (len);
}

static char	*str_copy(char *s1, char *s2, char c)
{
	int	i;

	i = 0;
	while (*(s1 + i) && *(s1 + i) != c)
	{
		*(s2 + i) = *(s1 + i);
		i++;
	}
	*(s2 + i) = '\0';
	return (s2);
}

char	**ft_split(char *s, char c)
{
	int		i;
	int		j;
	char	**new;

	i = 0;
	j = 0;
	new = malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!new)
		error();
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			new[j] = malloc(sizeof(char) * (word_len(s + i) + 1));
			if (!new[j])
				(free_2d(new, i), error());
			new[j] = str_copy(s + i, new[j], c);
			j++;
		}
		while (s[i] && s[i] != c)
			i++;
	}
	if (new[0] == NULL || *new[0] == '\0')
		(free_2d(new, i), error());
	return (new[j] = NULL, new);
}

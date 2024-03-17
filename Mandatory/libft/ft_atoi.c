/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 03:03:32 by omghazi           #+#    #+#             */
/*   Updated: 2024/03/16 21:27:54 by omghazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int ft_atoi(char *s)
{
    int sign;
    long res;
    long i;

    sign = 1;
    res = 0;
    i = 0;
    while (*(s + i) >= 9 && *(s + i) <= 13 || *(s + i) == 32)
        i++;
    if (*(s + i) == '+' || *(s + i) == '-')
    {
        if (*(s + i) == '-')
            sign *= -1;
        i++;
    }
    while (*(s + i) >= '0' && *(s + i) <= '9')
    {
        res = res * 10 + (*(s + i) - '0');
        if (is_overflow(res))
            error();
        i++;
    }
    return (res * sign);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bMicheal <tafftin@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 12:06:46 by bMicheal          #+#    #+#             */
/*   Updated: 2020/10/12 12:06:46 by bMicheal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_atoi(const char *str)
{
    long neg;
    long nbr;

    neg = 1;
    nbr = 0;
    while (*str == ' ' || *str == '\t' || *str == '\v' ||
			*str == '\f' || *str == '\r' || *str == '\n')
        str++;
    if (*str == '-')
        neg = -1;
    if (*str == '-' || *str == '+')
        str++;
    while (*str == '0')
        str++;
    while (*str >= '0' && *str <= '9')
        {
			if ((nbr > FT_LIM || (nbr == FT_LIM && (*str - 48) > 7))
			&& neg == 1)
				return (-1);
			if ((nbr > FT_LIM || (nbr == FT_LIM && (*str - 48) > 7))
			&& neg == -1)
				return (0);
            nbr = nbr * 10 + (*str - '0');
            str++;
        }
    return ((int)(nbr * neg));
}

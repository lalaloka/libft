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
    int neg;
    int nbr;

    neg = 0;
    nbr = 0;
    while (*str == ' ')
        str++;
    if (*str == '-')
        neg = 1;
    if (*str == '-' || *str == '+')
        str++;
    while (*str == '0')
        str++;
    while (*str >= '0' && *str <= '9')
        {
            nbr = nbr * 10 + (*str - '0');
            str++;
        }
    if (neg == 1)
        return (-nbr);
    return (nbr);
}
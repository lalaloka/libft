/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bMicheal <tafftin@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 13:00:33 by bMicheal          #+#    #+#             */
/*   Updated: 2020/10/09 13:00:33 by bMicheal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strncat(char *dst, const char *app, size_t n)
{
    size_t i;
    size_t k;

    i = 0;
    k = 0;
    while (dst[i])
        i++;
    while ((*app) && (k < n))
    {
        dst[i++] = *app++;
        k++;
    }
    dst[i] = '\0';
    return (dst);
}
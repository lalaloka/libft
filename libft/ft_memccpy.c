/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bMicheal <tafftin@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 15:51:29 by bMicheal          #+#    #+#             */
/*   Updated: 2020/10/06 15:51:29 by bMicheal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    size_t i;

    i = 0;
    if (!dst && !src)
        return (0);
    while (i < n)
    {
        ((char *)dst)[i] = ((char *)src)[i];
        if (((char *)src)[i] == c)
            break;
        i++;

    }
    return (dst);
}
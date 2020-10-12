/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bMicheal <tafftin@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 14:52:18 by bMicheal          #+#    #+#             */
/*   Updated: 2020/10/07 14:52:18 by bMicheal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d;
    unsigned char *s;

    d = (unsigned char *)dest;
    s = (unsigned char *)src;
    if (!dest && !src)
        return (NULL);
    if (d < s)
    {
        while (n--)
            *d++ = *s++;
    }
    else
    {
        d = d + n;
        s = s + n;
        while (n--)
            *--d = *--s;
    }
    return (dest);
}
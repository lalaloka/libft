/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bMicheal <tafftin@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 11:16:57 by bMicheal          #+#    #+#             */
/*   Updated: 2020/10/08 11:16:57 by bMicheal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
    unsigned char *str1;
    unsigned char *str2;

    str1 = (unsigned char *)ptr1;
    str2 = (unsigned char *)ptr2;
    while (n--)
    {
        if (*str1 != *str2)
            return (*str1 - *str2);
        str1++;
        str2++;
    }
    return (0);
}
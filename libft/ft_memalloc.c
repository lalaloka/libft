/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bMicheal <tafftin@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 14:47:24 by bMicheal          #+#    #+#             */
/*   Updated: 2020/10/13 14:47:24 by bMicheal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memalloc(size_t size)
{
    void *s;

    if (size <= 0)
        return (NULL);
    s = (void *)malloc(size);
    if (!s)
        return (NULL);
    ft_bzero(s, size);
    return (s);
}
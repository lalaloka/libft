/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bMicheal <tafftin@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 12:15:47 by bMicheal          #+#    #+#             */
/*   Updated: 2020/10/06 12:15:47 by bMicheal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *memptr, int val, size_t num)
{
    size_t  i;

    i = 0;
    while (i < num)
        ((char *)memptr)[i++] = val;
    return (memptr);
}
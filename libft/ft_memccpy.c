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
#include <string.h>
#include <stdio.h>

void    *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	char	*dst_n;
	char	*src_n;

	i = 0;
	dst_n = (char *)dst;
	src_n = (char *)src;
    while (i < n)
    {
		dst_n[i] = src_n[i];
		if ((unsigned char)src_n[i] == (unsigned char)c)
			return ((char *)dst + i + 1);
    	i++;
	}
    return (NULL);
}

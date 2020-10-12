/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bMicheal <tafftin@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 13:35:36 by bMicheal          #+#    #+#             */
/*   Updated: 2020/10/09 13:35:36 by bMicheal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t d_size)
{
    size_t d_len;
    size_t s_len;
    size_t offset;
    size_t src_ind;

    d_len = ft_strlen(dst);
    s_len = ft_strlen(src);
    offset = d_len;
    src_ind = 0;
    while (*(src + src_ind))
    {
        *(dst + offset) = *(src + src_ind);
        offset++;
        src_ind++;
        if (offset == d_size - 1)
            break;
    }
    *(dst + offset) = '\0';
    return (d_len + s_len);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bMicheal <tafftin@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 16:08:13 by bMicheal          #+#    #+#             */
/*   Updated: 2020/10/10 16:08:13 by bMicheal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *strb, const char *stra, size_t l)
{
    size_t  i;
    size_t  j;
    size_t  len;
    char    *s;

    i = 1;
    len = ft_strlen(stra);
    s = (char *)strb;
    if (!(len = ft_strlen(stra)))
        return ((char *)strb);
    while ((s[i]) && (i < l))
    {
        j = 0;
        while ((s[i] == stra[j]) && (i < l))
        {
            j++;
            i++;
            if (j == len)
                return (&s[i - len]);
        }
        i++;
    }
    return (NULL);
}
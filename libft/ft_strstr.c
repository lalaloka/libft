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

char *ft_strstr(const char *strb, const char *stra)
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
    while (s[i])
    {
        j = 0;
        while (s[i] == stra[j])
        {
            j++;
            if (j == len)
                return (&s[i - len + 1]);
            i++;
        }
        i++;
    }
    return (NULL);
}
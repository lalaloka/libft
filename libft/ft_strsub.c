/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bMicheal <tafftin@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 17:58:13 by bMicheal          #+#    #+#             */
/*   Updated: 2020/10/14 17:58:13 by bMicheal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strsub(char const *s, unsigned int start, size_t len)
{
    char    *newstr;
    size_t  i;

    i = 0;
    if ((!s) || (start + len > ft_strlen(s)))
        return (NULL);
    newstr = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (!newstr)
        return (NULL);
    while (i < len)
        newstr[i++] = s[start++];
    newstr[i] = '\0';
    return (newstr);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bMicheal <tafftin@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 15:37:19 by bMicheal          #+#    #+#             */
/*   Updated: 2020/10/13 15:37:19 by bMicheal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmap(char const *s, char (*f)(char))
{
    char    *str;

    if (!s)
        return(NULL);
    str = ft_strnew(ft_strlen(s));
    if (!str)
        return (NULL);
    if (f)
    {
        while (*s)
        {
            *str++ = f(*s++);
        }
        *str = '\0';
    }
    return (str);
}
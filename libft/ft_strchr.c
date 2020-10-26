/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bMicheal <tafftin@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 15:34:40 by bMicheal          #+#    #+#             */
/*   Updated: 2020/10/10 15:34:40 by bMicheal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr (const char *str, int ch)
{
    char *point;

    point =(char *)str;
    while (*point)
    {
        if (*point == ch)
            return (point);
        point++;
    }
	if (!ch && *point == '\0')
		return	(point);
    return (NULL);
}

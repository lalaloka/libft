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

char *ft_strrchr (const char *str, int ch)
{
    char *point;
    char *current;

    current = NULL;
    point =(char *)str;
    while (*point)
    {
        if (*point == ch)
            current = point;
        point++;
    }
	if (!ch && *point == '\0')
	return	(point);
    return (current);
}

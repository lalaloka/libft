/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bMicheal <tafftin@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 15:12:33 by bMicheal          #+#    #+#             */
/*   Updated: 2020/10/13 15:12:33 by bMicheal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char    *ft_strnew(size_t size)
{
    char *str;

    if (size <= 0)
        return (NULL);
    str = (char *)ft_memalloc(size + 1);
    if (!str)
        return (NULL);
    return (str);
}
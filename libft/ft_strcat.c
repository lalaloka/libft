/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bMicheal <tafftin@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 12:50:43 by bMicheal          #+#    #+#             */
/*   Updated: 2020/10/09 12:50:43 by bMicheal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strcat(char *dst, const char *app)
{
    int i;

    i = 0;
    while (dst[i])
        i++;
    while (*app)
        dst[i++] = *app++;
    return (dst);
}
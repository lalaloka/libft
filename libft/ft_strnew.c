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

char    *ft_strnew(size_t size)
{
    char *str;

    if (size <= 0)
        return (NULL);
    str = (char *)malloc(sizeof(char) * (size + 1));
    if (!str)
        return (NULL);
    ft_bzero(str, size + 1);
    return (str);
}
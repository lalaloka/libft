/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bMicheal <tafftin@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 18:08:49 by bMicheal          #+#    #+#             */
/*   Updated: 2020/10/14 18:08:49 by bMicheal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char            *newstr;

    if (!s1 || !s2)
        return (NULL);
    newstr = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
    if (!newstr)
        return (NULL);
    ft_strcpy(newstr, s1);
    ft_strcat(newstr, s2);
    return (newstr);
}

int     main()
{
    char const s1[] = "privet ";
    char const s2[] = "medved!";
    char const new[25];
    new = ft_strjoin(s1, s2);
    printf("%s", new);

    return 0;
}
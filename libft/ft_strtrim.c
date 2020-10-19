/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bMicheal <tafftin@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 18:23:34 by bMicheal          #+#    #+#             */
/*   Updated: 2020/10/14 18:23:34 by bMicheal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char    *ft_strtrim(char const *s)
{
    char *news;

    news = ft_strnew(ft_strlen(s));
    if (!news)
        return (NULL);
    while (*s == '\n' || *s == ' ' || *s == '\t')
        s++;
    while (*s)
    {
            *news = *s;
            news++;
            s++;
    }
    *news = '\0';
    return (news);
}

int main()
{
   const char str[] = "          kro k nam prishel     ";
   char *new;

   new = ft_strtrim(str);
   printf("%s", new);
   return 0;
}
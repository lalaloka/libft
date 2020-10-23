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

size_t  last_char(char const *s)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    while (s[i])
        {
            if ((s[i] != '\n') && (s[i] != ' ') && (s[i] != '\t'))
                j = i;
            i++;
        }
    return (j);
}

char    *ft_strtrim(char const *s)
{
    char    *new;
    size_t  i;
    size_t  j;
    size_t  l_ch;

    l_ch = last_char(s);
    i = 0;
    j = 0;
    if(!(new = ft_strnew(ft_strlen(s))))
        return (NULL);
    while ((s[i] == '\n') || (s[i] == ' ') || (s[i] == '\t'))
        i++;
    while ((s[i]) && (i <= l_ch))
    {
        new[j++] = s[i++];
    }
    new[j] = '\0';
    return (new);
}

int main()
{
   const char str[] = "kro k nam prishel";
   char *new;

   new = ft_strtrim(str);
   printf("%s", new);
   return 0;
}
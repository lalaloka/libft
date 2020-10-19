/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bMicheal <tafftin@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 13:29:36 by bMicheal          #+#    #+#             */
/*   Updated: 2020/10/17 13:29:36 by bMicheal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int     ft_wordcount(char *line, char sym)
{
    int words;

    words = 0;
    while (*line)
    {
        while (*line == sym)
            line++;
        if (*line)
            words++;
        while ((*line) && (*line != sym))
            line++;
    }
    return (words);
}

int     ft_wordlen(char *str, char sym)
{
    int len;

    len = 0;
    while (*str == sym)
        str++;
    while ((*str) && (*str != sym))
    {
        str++;
        len++;
    }
    return (len);
}

char    **ft_strsplit(char const *s, char c)
{
    char    *str;
    char    **arr;
    int     i;
    int     j;

    str = ft_strdup(s);
    i = 0;
    if (!(arr = (char **)malloc(sizeof(char *) * (ft_wordcount(str, c) + 1))))
        return (NULL);
    while (i < ft_wordcount(str, c))
    {
        j = 0;
        if (!(arr[i] = (char *)malloc(sizeof(char) * (ft_wordlen(str, c) + 1))))
            return (NULL);
        while (*str == c)
            str++;
        while((*str) && (*str != c))
            arr[i][j++] = *str++;
        arr[i][j] = '\0';
        i++;
    }
    arr[i] = '\0';
    return (arr);
}

int     main(void)	
{
	char	**arr_str;
    char str[] = "***Hi*darling***i**really**miss***you";
    char sym = '*';

	if (!(arr_str = ft_strsplit(str, sym)))
		return (0);
	while (*arr_str != ((void *)0))
	{
		printf("%s\n", *arr_str);
		arr_str++;
	}
	return (0);
}
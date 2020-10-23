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

size_t  ft_wordcount(char *line, char sym)
{
    size_t words;

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

char    *ft_word_sep(char *line, char sym)
{
    char *word;

    word = line;
    while ((*line) && (*line != sym))
        line++;
    *line = '\0';
    return (ft_strdup(word));
}

void    ft_free_words(char **words, size_t i)
{
	while (i--)
		ft_strdel(&(words[i]));
	free(*words);
}

char    **ft_words(char *s, char c, size_t count)
{
    char    *word;
    char    **arr;
    size_t  i;

    i = 0;
    if (!(arr = (char **)malloc(sizeof(char *) * (count + 1))))
        return (NULL);
    while (i < count)
    {
        while (*s == c)
            s++;
        if (*s)
        {
            if (!(word = ft_word_sep(s, c)))
            {
                ft_free_words(arr, i);
                return (NULL);
            }
            arr[i] = word;
            s = s + (ft_strlen(word) + 1);
        }
        i++;
    }
    arr[i] = NULL;
    return (arr);
}

char    **ft_strsplit(char const *s, char c)
{
    char **line;
    char *newstr;

    if ((!s) || (!(newstr = ft_strdup((char *)s))))
        return (NULL);
    line = ft_words(newstr, c, ft_wordcount(newstr, c));
    free(newstr); // зачеемЖ
    return (line);
}

int     main(void)	
{
	char	**arr_str;
    char const str[] = "**********good*";
    char sym = '*';

	arr_str = ft_strsplit(str, sym);

	while (*arr_str)
	{
		printf("%s\n", *arr_str);
		arr_str++;
	}
	return (0);
}
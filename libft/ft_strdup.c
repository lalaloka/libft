/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bMicheal <tafftin@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 11:55:02 by bMicheal          #+#    #+#             */
/*   Updated: 2020/10/08 11:55:02 by bMicheal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char  *ft_strdup(const char *str)
{
	size_t   i;
	char     *result;

	if ((result = ft_strnew(ft_strlen(str))))
	{
		i = 0;
		while (str[i])
		{
			result[i] = str[i];
			i++;
		}
		result[i] = '\0';
	}
	return (result);
}

int main()
{
   char const s[]="DA MNE VOOBSHE POXUI";
   char *str;
   str = ft_strdup(s);
   printf("%s", str);
   return 0;
}
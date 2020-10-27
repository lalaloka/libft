/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bMicheal <tafftin@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 16:08:13 by bMicheal          #+#    #+#             */
/*   Updated: 2020/10/10 16:08:13 by bMicheal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t l)
{
    size_t  i;
    size_t  j;

    i = 0;
	if(*little == '\0')
		return ((char *)big);
    while ((big[i]) && (i < l))
    {
        j = 0;
		while ((little[j]) && big[i + j] == little[j] && ((i + j) < l))
			j++;
		if (little[j] == '\0')
			return ((char *)big + i);
		i++;
    }
    return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bMicheal <tafftin@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 17:13:41 by bMicheal          #+#    #+#             */
/*   Updated: 2020/10/07 17:13:41 by bMicheal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *arr, int c, size_t n)
{
	size_t	i;
	char	*spot;

	i = 0;
	spot = (char *)arr;
	while (i < n)
	{
		if ((unsigned char)spot[i] == (unsigned char)c)
			return (&spot[i]);
		i++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bMicheal <tafftin@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 13:35:36 by bMicheal          #+#    #+#             */
/*   Updated: 2020/10/09 13:35:36 by bMicheal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t d_size)
{
    size_t i;
    size_t j;

	i = 0;
	j = 0;
	while ((dst[i]) && (i < d_size))
		i++;
	while ((src[j]) && ((i + j + 1) < d_size))
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i != d_size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

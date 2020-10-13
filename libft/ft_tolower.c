/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bMicheal <tafftin@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 13:26:23 by bMicheal          #+#    #+#             */
/*   Updated: 2020/10/12 13:26:23 by bMicheal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
	    c = c + 32;
    return (c);
}
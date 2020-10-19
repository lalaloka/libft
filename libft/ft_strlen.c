/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bMicheal <tafftin@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 11:42:27 by bMicheal          #+#    #+#             */
/*   Updated: 2020/10/08 11:42:27 by bMicheal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t  ft_strlen(const char *str)
{
    size_t i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}

int main()
{
    char s[] = "012345";
    printf("%d", ft_strlen(s));
    return 0;
}
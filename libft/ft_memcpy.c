/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bMicheal <tafftin@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 12:57:00 by bMicheal          #+#    #+#             */
/*   Updated: 2020/10/06 12:57:00 by bMicheal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void    *ft_memcpy(void *destptr, const void *srcptr, size_t num)
{
    size_t i;

    i = 0;
    if ((!destptr) && (!srcptr))
        return (0);
    while (i < num)
    {
        ((char *)destptr)[i] = ((char *)srcptr)[i];
        i++;
    }
    return (destptr);
}

int main()
{
    char srcstr[] = "abcdefghij";
    char deststr[] = "1234567890";
    printf("%s\n", (char*)ft_memcpy(deststr, srcstr, 15));
    printf("%s", (char*)memcpy(deststr, srcstr, 15));
    return 0;
}
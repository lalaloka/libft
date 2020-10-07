/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bMicheal <tafftin@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 14:52:18 by bMicheal          #+#    #+#             */
/*   Updated: 2020/10/07 14:52:18 by bMicheal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d;
    unsigned char *s;

    d = (unsigned char *)dest;
    s = (unsigned char *)src;
    if (!dest && !src)
        return (NULL);
    if (d < s)
    {
        while (n--)
            *d++ = *s++;
    }
    else
    {
        d = d + n;
        s = s + n;
        while (n--)
            *--d = *--s;
    }
    return (dest);
}

int main (void)
{
   unsigned char src[]= "1234567890";
   //unsigned char dest[] = "Zelenioglazoe taksi";
   printf ("src original: %s\n",src);

   ft_memmove (&src[4], &src[3], 3);

   printf ("src new: %s\n", src);
   return 0;
}
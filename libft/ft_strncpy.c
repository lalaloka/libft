/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bMicheal <tafftin@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 12:11:32 by bMicheal          #+#    #+#             */
/*   Updated: 2020/10/09 12:11:32 by bMicheal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char    *ft_strncpy(char *dst, const char *src, size_t n)
{
    size_t i;

    i = 0;
    while (i < n && (src[i]))
    {
        dst[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dst[i] = '\0';
        i++;
    }
    return (dst);
}

int main (void)
{    
   char src[10]= "12345\0006789";
 
   char dst1[10]= "1111111111";
   char dst2[10]= "1111111111";

   int i;
   strncpy (dst1, src,3);
   printf ("dst1: ");
   for (i=0; i<10; i++)
      printf (" %2d", (unsigned short) dst1[i]);
    printf ("\n");

   strncpy (dst2, src,7);
   printf ("dst2: ");
   for (i=0;i<10;i++)
      printf (" %2d", (unsigned short) dst2[i]);

   return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bMicheal <tafftin@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 13:00:33 by bMicheal          #+#    #+#             */
/*   Updated: 2020/10/09 13:00:33 by bMicheal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char    *ft_strncat(char *dst, const char *app, size_t n)
{
    size_t i;
    size_t k;

    i = 0;
    k = 0;
    while (dst[i])
        i++;
    while ((*app) && (k < n))
    {
        dst[i++] = *app++;
        k++;
    }
    dst[i] = '\0';
    return (dst);
}

int main (void)
{    
   char src1[10]= "000";
   char src2[10]= "000";
   char app[10]= "12345";

   printf ("app:  %s\n",app);

   ft_strncat (src1, app,3);
   printf ("src1: %s\n", src1);

   ft_strncat (src2, app,7);
   printf ("src2: %s\n", src2);
   return 0;
}
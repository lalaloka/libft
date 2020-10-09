/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bMicheal <tafftin@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 12:44:45 by bMicheal          #+#    #+#             */
/*   Updated: 2020/10/08 12:44:45 by bMicheal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>  // Для printf
#include <string.h> // Для strcpy

char    *ft_strcpy(char *dst, const char *src)
{
    while (*src)
        *dst++ = *src++;
    *dst = '\0';
    return (dst);
}

int main (void)
{    
   char src[]= "first string\0second string";
   char dst[]="";
   // Копируем строку из массива src в массив dst. Обратите внимание, 
   //что скопируется только строка «первая строка\0». 
   ft_strcpy (dst, src);
   printf ("src: %s\n", dst);
   return 0;
}

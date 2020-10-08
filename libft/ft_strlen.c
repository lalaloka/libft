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

#include <stdio.h>  // Для printf
#include <string.h> // Для strlen

size_t  ft_strlen(const char *str)
{
    size_t i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}

int main (void)
{    
   char str []= "12345";
   printf ("%I64d\n", strlen(str));
   return 0;
}
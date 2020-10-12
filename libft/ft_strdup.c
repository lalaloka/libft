/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bMicheal <tafftin@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 11:55:02 by bMicheal          #+#    #+#             */
/*   Updated: 2020/10/08 11:55:02 by bMicheal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char  *ft_strdup(const char *str)
{
   size_t i;
   char *newstr;

   i = 0;
   while (str[i])
      i++;
   if ((newstr = (char *)malloc(sizeof(char) * (i + 1))) == 0)
      return (NULL);
   i = 0;
   while (str[i])
   {
      newstr[i] = str[i];
      i++;
   }
   newstr[i] = '\0';
   return (newstr);
}
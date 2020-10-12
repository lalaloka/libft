/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bMicheal <tafftin@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 17:13:41 by bMicheal          #+#    #+#             */
/*   Updated: 2020/10/07 17:13:41 by bMicheal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memchr(const void *arr, int c, size_t n)
{
   size_t         i;
   unsigned char  *spot;

   i = 0;
   spot = (unsigned char *)arr;
   while (i < n)
   {
      if (*spot == c)
         return (spot);
      spot++;
   }
   return (NULL);
}
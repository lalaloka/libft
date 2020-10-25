/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bMicheal <tafftin@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 13:42:09 by bMicheal          #+#    #+#             */
/*   Updated: 2020/10/23 13:42:09 by bMicheal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t     ft_nbrlen(long long n)
{
    size_t len;

    len = 1;
    while ((n /= 10))
        len++;
    return (len);
}

void    ft_string(char *str, long long nbr, size_t k)
{
    if (nbr == 0)
        str[0] = '0';
    else if (nbr < 0)
    {
        nbr *= -1;
        str[0] = '-';
    }
    str[k - 1] = '\0';
    k--;
    while (nbr > 0)
    {
        str[k - 1] = (nbr % 10) + 48;
        nbr /= 10;
        k--;
    }
}

char    *ft_itoa(int n)
{
    char        *number;
    long long   new;
    size_t      len;

    len = 0;
    new = n;
    if (n < 0)
        len = ft_nbrlen(-new) + 2;
    else
        len = ft_nbrlen(new) + 1;
    if(!(number = (char *)malloc(sizeof(char) * len)))
        return (NULL);
    ft_string(number, new, len);
    return (number);
}

int     main()
{
    int i = -2147483648;
    printf("number through string = %s\n", ft_itoa(i));
    return 0;
}
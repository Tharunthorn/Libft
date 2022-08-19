/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 00:43:18 by tharunthorn       #+#    #+#             */
/*   Updated: 2022/08/20 00:56:29 by thmusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * TODO Fix below
 * ! Missing Norm
 * ? Param unsigned int need to change to size_t
 */

void *ft_memchr(const void *s, int c, unsigned int n)
{
    const unsigned char *temp;
    unsigned int len;

    temp = s;
    len = 0;
    while (len <= n)
    {
        if (temp[len] == c)
            break;
        len++;
    }
    return ((void *)s + len);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
    const char str[] = "http://www.tutorialspoint.com";
    const char ch = '.';
    char *ret;

    ret = ft_memchr(str, ch, strlen(str));

    printf("String after |%c| is - |%s|\n", ch, ret);

    return (0);
}
*/

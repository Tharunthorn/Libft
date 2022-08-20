/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 00:43:31 by tharunthorn       #+#    #+#             */
/*   Updated: 2022/08/20 13:05:35 by thmusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * TODO Fix below
 * ! Missing Norm check
 */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t bytesize)
{
    while (bytesize--)
    {
        *(unsigned char *)dst = *(const unsigned char *)src;
        dst++;
        src++;
    }
    while (*(unsigned char *)dst != '\0')
    {
        *(unsigned char *)dst = '\0';
        dst++;
    }
    return (dst);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Geeks";
    char str2[] = "Q";

    puts("str1 before memcpy ");
    puts(str1);

    // Copies contents of str2 to str1
    ft_memcpy(str1, str2, sizeof(str2));

    puts("\nstr1 after memcpy ");
    puts(str1);

    return 0;
}
*/

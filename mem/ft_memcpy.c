/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 00:43:31 by tharunthorn       #+#    #+#             */
/*   Updated: 2022/08/20 00:55:33 by thmusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * TODO Fix below
 * ! Missing Norm
 * ? Param unsigned int need to change to size_t
 */

void *ft_memcpy(void *dst, const void *src, unsigned int bytesize)
{
    unsigned char *tempdst;
    const unsigned char *tempsrc;
    unsigned int lenght;

    tempdst = dst;
    tempsrc = src;
    lenght = 0;
    while (lenght < bytesize)
    {
        *tempdst = tempsrc[lenght];
        tempdst++;
        lenght++;
    }
    while (*tempdst != '\0')
    {
        *tempdst = '\0';
        tempdst++;
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

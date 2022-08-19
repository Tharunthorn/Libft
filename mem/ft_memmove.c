/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 00:43:34 by tharunthorn       #+#    #+#             */
/*   Updated: 2022/08/20 00:55:34 by thmusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * TODO Fix below
 * ! Missing Norm
 * ? Param unsigned int need to change to size_t
 */

void *ft_memmove(void *dst, const void *src, unsigned int len)
{
    unsigned char *dsttemp;
    unsigned char *lastdst;
    const unsigned char *srctemp;
    const unsigned char *lastsrc;

    dsttemp = dst;
    srctemp = src;
    if (dsttemp < srctemp)
        while (len--)
            *dsttemp++ = *srctemp++;
    else
    {
        lastdst = dsttemp + (len - 1);
        lastsrc = srctemp + (len - 1);
        while (len--)
            *lastdst-- = *lastsrc--;
    }
    return (dst);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Geeks"; // Array of size 100
    char str2[] = "Quiz";  // Array of size 5

    puts("str1 before memmove ");
    puts(str1);

    // Copies contents of str2 to sr1
    ft_memmove(str1, str2, sizeof(str2));

    puts("\nstr1 after memmove ");
    puts(str1);
    return 0;
}
*/

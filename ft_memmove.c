/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 00:43:34 by tharunthorn       #+#    #+#             */
/*   Updated: 2022/08/20 17:54:00 by thmusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*lastdst;
	unsigned char	*lastsrc;

	if ((unsigned char *)dst < (const unsigned char *)src)
		while (len--)
			*(unsigned char *)dst++ = *(const unsigned char *)src++;
	else
	{
		lastdst = (unsigned char *)dst + (len - 1);
		lastsrc = (unsigned char *)src + (len - 1);
		while (len--)
			*(unsigned char *)lastdst-- = *lastsrc--;
	}
	return (dst);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Geeks"; // Array of size 100
    char str2[] = "Quize"; // Array of size 5

    puts("str1 before memmove ");
    puts(str1);

    // Copies contents of str2 to sr1
    ft_memmove(str1, str2, sizeof(str2));

    puts("\nstr1 after memmove ");
    puts(str1);
    return 0;
}
*/

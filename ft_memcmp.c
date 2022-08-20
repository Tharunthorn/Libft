/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 00:43:22 by tharunthorn       #+#    #+#             */
/*   Updated: 2022/08/20 13:37:27 by thmusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (*(const unsigned char *)s1 != '\0' && n != 0)
	{
		if (*(const unsigned char *)s1 > *(const unsigned char *)s2)
			return (1);
		else if (*(const unsigned char *)s1
			< *(const unsigned char *)s2)
			return (-1);
		else
		{
			s1++;
			s2++;
			n--;
		}
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[15];
    char str2[15];
    int ret;

    memcpy(str1, "abcdef", 6);
    memcpy(str2, "abcdeF", 6);

    ret = ft_memcmp(str1, str2, 6);

    if (ret > 0)
    {
        printf("str2 is less than str1");
    }
    else if (ret < 0)
    {
        printf("str1 is less than str2");
    }
    else
    {
        printf("str1 is equal to str2");
    }

    return (0);
}
*/

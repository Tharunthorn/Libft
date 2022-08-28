/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 09:05:25 by thmusik           #+#    #+#             */
/*   Updated: 2022/08/28 22:07:38 by thmusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (*s == c)
		return ((char *)s);
	while (*s++)
	{
		if (*s == c)
			return ((char *)s);
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
    const char str[] = "http://www.tutorialspoint.com";
    const char ch = '.';
    char *ret;

    ret = ft_strchr(str, ch);

    printf("String after |%c| is - |%s|\n", ch, ret);

    return (0);
}
*/

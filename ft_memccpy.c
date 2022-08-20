/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 00:33:00 by thmusik           #+#    #+#             */
/*   Updated: 2022/08/20 21:46:32 by thmusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src,
		int terminatebyte, size_t bytelenght)
{
	size_t	lenght;

	lenght = 0;
	while (lenght < bytelenght)
	{
		*(unsigned char *restrict)dst = *(unsigned char *restrict)src;
		if (*(unsigned char *restrict)src == terminatebyte)
		{
			dst++;
			break ;
		}
		dst++;
		src++;
	}
	while (lenght < bytelenght)
	{
		*(unsigned char *restrict)dst = '\0';
		lenght++;
	}
	return (dst);
}

/*
#include <stdio.h>
#include <string.h>

char *msg = "This is the string: not copied";

int main()
{

    char buffer[80];
    ft_memccpy(buffer, msg, ':', 80);
    printf("%s\n", buffer);
}
*/

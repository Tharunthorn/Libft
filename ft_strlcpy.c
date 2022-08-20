/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 12:58:51 by thmusik           #+#    #+#             */
/*   Updated: 2022/08/20 21:53:31 by thmusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src,
			size_t dstsize)
{
	int	srclenght;
	int	dstlenght;
	int	index;

	srclenght = 0;
	dstlenght = 0;
	index = 0;
	while (src[srclenght] != '\0')
		srclenght++;
	while (dst[dstlenght] != '\0')
		dstlenght++;
	while (src[index] != '\0' && dstsize != 1)
	{
		dst[index] = src[index];
		index++;
		dstsize--;
	}
	while (dstlenght >= index)
	{
		dst[index] = '\0';
		index++;
	}
	dst[index] = '\0';
	return (srclenght);
}

/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[1]);
	printf("strlcpy: %lu\n", ft_strlcpy(argv[1], argv[2], atoi(argv[3])));
	printf("%s\n", argv[1]);
}*/

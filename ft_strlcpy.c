/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 12:58:51 by thmusik           #+#    #+#             */
/*   Updated: 2022/08/15 14:30:53 by thmusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long	ft_strlcpy(char * restrict dst, const char * restrict src,
	unsigned int dstsize)
{
	int	lenght;
	
	lenght = 0;
	while (src[lenght] != '\0')
		lenght ++;
	return (lenght);
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[1]);
	printf("strlcpy: %lu\n", ft_strlcpy(argv[1], argv[2], atoi(argv[3])));
	printf("%s\n", argv[1]);
}

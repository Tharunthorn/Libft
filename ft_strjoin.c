/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 11:41:47 by thmusik           #+#    #+#             */
/*   Updated: 2022/08/21 18:22:32 by thmusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	lens3;

	lens3 = 0;
	s3 = (char *)malloc(ft_strlen(s1) + ft_strlen(s2));
	if (!s3)
		return (0);
	while (*s1 != '\0')
	{
		s3[lens3] = *s1++;
		lens3++;
	}
	while (*s2 != '\0')
	{
		s3[lens3] = *s2++;
		lens3++;
	}
	return (s3);
}

/*
#include<stdio.h>

int	main(int argc, char **argv)
{
	(void)argc;
	char *s = ft_strjoin(argv[1], argv[2]);
	printf("%s\n", s);
}
*/

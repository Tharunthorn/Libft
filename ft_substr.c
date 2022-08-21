/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 22:18:19 by thmusik           #+#    #+#             */
/*   Updated: 2022/08/21 11:28:06 by thmusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;

	i = 0;
	subs = (char *)malloc(len);
	if (!subs)
		return (0);
	while (len--)
	{
		subs[i] = s[start + i];
		i++;
	}
	return (subs);
}

/*
#include<stdio.h>

int	main(int argc, char **argv)
{
	(void)argc;
	char *s = ft_substr(argv[1], atoi(argv[2]), atoi(argv[3]));
	printf("%s\n", argv[1]);
	printf("%s\n", s);
}
*/

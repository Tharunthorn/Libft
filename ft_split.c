/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 23:10:09 by thmusik           #+#    #+#             */
/*   Updated: 2022/09/01 10:29:52 by thmusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_splitcount(char const *s, char c)
{
	size_t	index;
	size_t	count;

	index = 0;
	count = 0;
	while (index < ft_strlen(s))
	{
		if (*(s + index) == c)
		{
			if (*(s + index + 1) != '\0' && *(s + index + 1) != c)
				count++;
		}
		index++;
	}
	return (count);
}

char **ft_split(char const *s, char c)
{
	char	**strs;
	size_t	sindex;
	size_t	strindex;
	size_t	strsindex;

	if (!s)
		return (NULL);
	strs = (char **)malloc(sizeof(char *) * (ft_splitcount(s, c) + 1));
	if (!strs)
		return (NULL);
	sindex = 0;
	strindex = 0;
	strsindex = 0;
	while (s[sindex] != '\0')
	{
		if (s[sindex] != c)
		{
			strs[strsindex][strindex] = s[sindex];
			strindex++;
		}
		else
		{
			strs[strsindex][strindex] = '\0';
			strindex = 0;
			strsindex++;
		}
		sindex++;
	}
	strs[strsindex] = NULL;
	return (strs);
}
/*
#include<stdio.h>
int main()
{
	char *string = "      split       this for   me  !       ";
	int i = 0;
	printf("%zu\n", ft_splitcount(string, ' '));

}*/

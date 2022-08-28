/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 09:03:23 by thmusik           #+#    #+#             */
/*   Updated: 2022/08/28 11:51:52 by thmusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned char	*str;
	unsigned int	i;

	str = ft_strdup(s);
	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		str[i] = (*f)(i, str);
		i++;
	}
	return (str);
}

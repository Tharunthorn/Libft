/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 08:27:13 by thmusik           #+#    #+#             */
/*   Updated: 2022/08/20 09:12:05 by thmusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *str)
{
	size_t lenght;

	lenght = 0;
	while (str[lenght] != '\0')
		lenght++;
	return (lenght);
}

/*#include<stdio.h>
#include<string.h>

int	main(int argc, char **argv)
{
	(void)argc;
	printf("strlen: %lu\n", strlen(argv[1]));
	printf("ft_strlen: %lu\n", ft_strlen(argv[1]));
	return (0);
}*/

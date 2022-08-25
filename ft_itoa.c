/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:35:58 by thmusik           #+#    #+#             */
/*   Updated: 2022/08/25 14:07:02 by thmusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>

int	intlen(int n)
{
	int	result;

	result = 0;
	if (n < 0)
		n *= -1;
	while (n > 0)
	{
		result++;
		n /= 10;
	}
	return (result);
}

int	ft_pow(int n, int p)
{
	int		result;

	result = 1;
	if (p == 0)
		return (result);
	while (p--)
		result *= n;
	return (result);
}

void	reverse(char *x, int begin, int end)
{
	char	c;

	if (begin >= end)
		return ;
	c = *(x + begin);
	*(x + begin) = *(x + end);
	*(x + end) = c;
	reverse(x, ++begin, --end);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		nlen;
	int		i;

	i = 0;
	nlen = intlen(n);
	result = (char *)malloc(nlen * sizeof(int));
	if (!result)
		return (0);
	if (n < 0)
	{
		result[i] = '-';
		n *= -1;
		i++;
	}
	while (i <= nlen)
	{
		result[i] = (n % 10) + 48;
		n /= 10;
		i++;
	}
	result[i] = '\0';
	reverse(result, 1, nlen);
	return (result);
}

/*
#include<stdio.h>

int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", ft_itoa(-100000));
	return (0);
}
*/

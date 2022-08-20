/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 08:25:57 by thmusik           #+#    #+#             */
/*   Updated: 2022/08/20 08:26:11 by thmusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * TODO Fix below
 * ! Missing Norm check
 */

#include "libft.h"

void *ft_calloc(unsigned long count, unsigned long size)
{
    char *ptr;
    int i;
    int x;

    ptr = (void *)malloc(count * size);
    i = 0;
    x = count * size;
    if (!ptr)
        return (NULL);
    while (x--)
    {
        ptr[i] = 0;
        i++;
    }
    return (ptr);
}

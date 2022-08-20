/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 09:08:28 by thmusik           #+#    #+#             */
/*   Updated: 2022/08/20 09:09:15 by thmusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t strlcat(char *restrict dst, const char *restrict src,
               size_t size)
{
    register char *d = dst;
    register const char *s = src;
    register unsigned int n = size;
    unsigned int dstlen;

    while (n-- != 0 && *d != '\0')
        d++;
    dstlen = d - dst;
    n = size - dstlen;

    if (n == 0)
        return (dstlen + strlen(s));
    while (*s != '\0')
    {
        if (n != 1)
        {
            *d++ = *s;
            n--;
        }
        s++;
    }
    *d = '\0';

    return (dstlen + (s - src));
}

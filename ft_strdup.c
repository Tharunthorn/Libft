/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 09:06:46 by thmusik           #+#    #+#             */
/*   Updated: 2022/08/20 09:07:09 by thmusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *str)
{
    unsigned int len;
    char *copy;

    len = 0;
    while (str[len] != '\0')
        len++;
    copy = (char *)malloc(len + 1);
    if (!copy)
        return (0);
    ft_memcpy(copy, str, len);
    return (copy);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
    char source[] = "GeeksForGeeks";

    // A copy of source is created dynamically
    // and pointer to copy is returned.
    char *target = ft_strdup(source);

    printf("%s", target);
    return 0;
}
*/

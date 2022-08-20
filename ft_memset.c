/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 00:43:38 by tharunthorn       #+#    #+#             */
/*   Updated: 2022/08/20 08:54:25 by thmusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * TODO Fix below
 * ! Missing 42Header
 */

#include "libft.h"

void *ft_memset(void *adress, int value, size_t bytelenght)
{
    unsigned int lenght;
    unsigned char *temp;

    lenght = 0;
    temp = adress;
    while (lenght < bytelenght)
    {
        *temp = value;
        temp++;
        lenght++;
    }
    return (adress);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
    char str[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore memset(): %s\n", str);

    // Fill 8 characters starting from str[13] with '.'
    ft_memset(str + 13, '.', 8 * sizeof(char));

    printf("After memset():  %s", str);
    return 0;
}
*/

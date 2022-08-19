
/**
 * TODO Fix below
 * ! Missing Norm check
 * ! Missing 42Header
 * ? Param unsigned int need to change to size_t
 */

#include "../mem/ft_memset.c"

void ft_bzero(void *s, unsigned int n)
{
    ft_memset(s, 0, n);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
    char str[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore memset(): %s\n", str);

    // Fill 8 characters starting from str[13] with '.'
    ft_bzero(str + 13, 8 * sizeof(char));

    printf("After bzero():  %s", str);
    return 0;
}
*/
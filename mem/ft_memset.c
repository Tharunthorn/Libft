
/**
 * TODO Fix below
 * ? Param char* need to change from to void*
 * ? Param unsigned int need to change to size_t
 * ! Missing Norm check
 * ! Missing 42Header
 */

void *ft_memset(char *adress, int value, unsigned int bytelenght)
{
    int lenght;

    lenght = 0;
    while (lenght < bytelenght)
    {
        *adress = value;
        adress++;
        lenght++;
    }
    return (0);
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
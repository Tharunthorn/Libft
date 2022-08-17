
/**
 * TODO Fix below
 * ! Missing Norm check
 * ! Missing 42Header
 * ? Param unsigned int need to change to size_t
 */

void *ft_memset(void *adress, int value, unsigned int bytelenght)
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
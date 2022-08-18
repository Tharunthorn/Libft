
/**
 * TODO Fix below
 * ! Missing 42Header
 * ! Missing Norm
 * ? Param unsigned int need to change to size_t
 */

int ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
    const unsigned char *temps1;
    const unsigned char *temps2;

    temps1 = s1;
    temps2 = s2;
    while (*temps1 != '\0' && n != 0)
    {
        if (*temps1 > *temps2)
            return (1);
        else if (*temps1 < *temps2)
            return (-1);
        else
        {
            temps1++;
            temps2++;
            n--;
        }
    }

    return (0);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[15];
    char str2[15];
    int ret;

    memcpy(str1, "abcdef", 6);
    memcpy(str2, "abcdeF", 6);

    ret = ft_memcmp(str1, str2, 6);

    if (ret > 0)
    {
        printf("str2 is less than str1");
    }
    else if (ret < 0)
    {
        printf("str1 is less than str2");
    }
    else
    {
        printf("str1 is equal to str2");
    }

    return (0);
}
*/
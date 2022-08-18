
/**
 * TODO Fix below
 * ! Missing 42Header
 * ! Missing Norm
 * ? Param unsigned int need to change to size_t
 */

void *ft_memccpy(void *restrict dst, const void *restrict src,
                 int terminatebyte, unsigned int bytelenght)
{
    unsigned char *restrict tempdst;
    const unsigned char *restrict tempsrc;
    unsigned int lenght;

    tempdst = dst;
    tempsrc = src;
    lenght = 0;
    while (lenght < bytelenght)
    {
        *tempdst = tempsrc[lenght];
        if (tempsrc[lenght - 1] == terminatebyte)
            break;
        tempdst++;
        lenght++;
    }
    while (lenght < bytelenght)
    {
        *tempdst = '\0';
        lenght++;
    }
    return (dst);
}

/*
#include <stdio.h>
#include <string.h>

char *msg = "This is the string: not copied";

int main()
{

    char buffer[80];
    ft_memccpy(buffer, msg, ':', 80);
    printf("%s\n", buffer);
}
*/
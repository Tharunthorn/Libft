#include <stdlib.h>

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

#include "../mem/ft_memcpy.c"
#include <stdlib.h>

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
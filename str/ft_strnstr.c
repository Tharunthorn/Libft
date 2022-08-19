
//? Param unsigned int need to change to size_t

char *ft_strnstr(const char *haystack, const char *needle, unsigned int len)
{
    unsigned int i;
    unsigned int j;

    i = 0;
    if (needle[0] == '\0')
        return ((char *)haystack);
    while (haystack[i] && i < (unsigned int)len)
    {
        j = 0;
        while (haystack[i + j] == needle[j] && haystack[i + j] && (i + j) < (unsigned int)len)
            j++;
        if (!needle[j])
            return ((char *)&haystack[i]);
        i++;
    }
    return (0);
}

/*
#include <string.h>
#include <xlocale.h>
#include <stdio.h>

int main(void)
{
    const char *largestring = "Foo Bar Baz";
    const char *smallstring = "o";
    char *ptr;

    ptr = ft_strnstr(largestring, smallstring, 2);
    printf("%s\n", ptr);
}
*/
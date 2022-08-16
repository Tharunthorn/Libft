
char *ft_strchr(const char *s, int c)
{
    while (*s++)
    {
        if (*s == c)
            return (char *)s;
    }
    return (0);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
    const char str[] = "http://www.tutorialspoint.com";
    const char ch = '.';
    char *ret;

    ret = ft_strchr(str, ch);

    printf("String after |%c| is - |%s|\n", ch, ret);

    return (0);
}
*/
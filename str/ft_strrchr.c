
char *ft_strrchr(const char *s, int c)
{
    char *temp;
    char *str;

    temp = (char *)0;
    while (*s++)
    {
        str = (char *)s;
        if (*str == c)
            temp = (char *)s;
    }
    return (temp);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
    const char str[] = "http://www.tutorialspoint.com";
    const char ch = '.';
    char *ret;

    ret = ft_strrchr(str, ch);

    printf("String after |%c| is - |%s|\n", ch, ret);

    return (0);
}
*/
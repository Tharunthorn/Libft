
int ft_isprint(int c)
{
    if (c >= 32 && c <= 126)
        return (1);
    return (0);
}

/*
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int ch;

    for (ch = 0; ch <= 127; ch++)
    {
        printf("%#04x    ", ch);
        if (ft_isprint(ch))
            printf("The character is printable %c\n", ch);
        else
            printf("Cannot Print ASCII character\n");
    }
    return 0;
}
*/
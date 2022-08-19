
//! Missing 42Header & Norm

int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
        return (1);
    return (0);
}

/*
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int ch;

    for (ch = 0x7c; ch <= 0x82; ch++)
    {
        printf("%#04x    ", ch);
        if (ft_isascii(ch))
            printf("The character is %c\n", ch);
        else
            printf("Cannot be represented by an ASCII character\n");
    }
    return 0;
}
*/
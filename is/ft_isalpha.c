
//! Missing 42Header & Norm

int ft_isalpha(int c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        return (1);
    return (0);
}

/*
#include <stdio.h>
#include <ctype.h>
int main()
{
    char c;
    c = 'Q';
    printf("\nResult when uppercase alphabet is passed: %d", ft_isalpha(c));

    c = 'q';
    printf("\nResult when lowercase alphabet is passed: %d", ft_isalpha(c));

    c = '+';
    printf("\nResult when non-alphabetic character is passed: %d", ft_isalpha(c));

    return 0;
}
*/
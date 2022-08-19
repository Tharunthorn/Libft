#include <unistd.h>
#include "ft_putchar_fd.c"

void ft_putstr_fd(char *s, int fd)
{
    while (*s)
    {
        ft_putchar_fd(*s, fd);
        s++;
    }
}

/*
int main(int argc, char **argv)
{
    (void)argc;
    ft_putstr_fd(argv[1], 1);
    return (0);
}
*/
#include <unistd.h>
#include "ft_putchar_fd.c"

void ft_putendl_fd(char *s, int fd)
{
    while (*s)
    {
        ft_putchar_fd(*s, fd);
        s++;
    }
    ft_putchar_fd('\n', 1);
}

/*
int main(int argc, char **argv)
{
    (void)argc;
    ft_putendl_fd(argv[1], 1);
    return (0);
}
*/
#include <unistd.h>
#include "ft_putchar_fd.c"

void ft_putnbr_fd(int n, int fd)
{
    if (n > 9)
    {
        ft_putnbr_fd((n / 10), fd);
        ft_putnbr_fd((n % 10), fd);
    }
    else
        ft_putchar_fd((n + 48), 1);
}

/*
int main(int argc, char **argv)
{
    (void)argc;
    ft_putnbr_fd(200, 1);
    return (0);
}
*/
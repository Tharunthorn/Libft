int ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
    while (n--)
    {
        if (*s1 != *s2)
            return ((unsigned char)*s1 - (unsigned char)*s2);
        if (*s1 == '\0' || *s2 == '\0')
            return (0);
        s1++;
        s2++;
    }
    return (0);
}
unsigned int strlcat(char *restrict dst, const char *restrict src,
                     unsigned int size)
{
    register char *d = dst;
    register const char *s = src;
    register unsigned int n = size;
    unsigned int dstlen;

    while (n-- != 0 && *d != '\0')
        d++;
    dstlen = d - dst;
    n = size - dstlen;

    if (n == 0)
        return (dstlen + strlen(s));
    while (*s != '\0')
    {
        if (n != 1)
        {
            *d++ = *s;
            n--;
        }
        s++;
    }
    *d = '\0';

    return (dstlen + (s - src));
}

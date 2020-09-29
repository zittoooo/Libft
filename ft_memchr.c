#include "libft.h"

void    *memchr(const void *s, int c, size_t n)
{
    unsigned char *src;

    src = (unsigned char *)s;
    if (s)
    {
        while (n--)
        {
            if (*src == (unsigned char)c)
                return ((void *)src);
            src++;
        }
    }
    return (NULL);
}
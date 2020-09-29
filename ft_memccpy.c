#include "libft.h"

void    *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    const char *source;
    char *dest;

    source = src;
    dest = dst;
    while(n--)
    {
        *dest++ = *source;
        if(*source == c)
            return ((void *)dest);
        source++;
    }
    return (NULL);
}
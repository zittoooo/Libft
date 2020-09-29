#include <stdio.h>
#include "libft.h"

void ft_bzero(void *s, size_t len)
{
    unsigned char *buffer;
    size_t i;

    buffer = (unsigned char *)s;
    i = 0;
    while (i < len)
    {
        buffer[i] = 0;
        i++;
    }
}

#include <stdio.h>
#include <unistd.h>
#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t len)
{   
    if(!dest)
        return (NULL);
            
    char *tmp = dest;
    const char *s = src;

    while(len--)
        *tmp++ = *s++;

    return dest;
}


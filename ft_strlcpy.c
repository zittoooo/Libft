#include "libft.h"

size_t      ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t  i;

    i = 0;
    if(dstsize == 0)
    {
        while(src[i])
            i++;        
        return (i);
    }
    
    while(i < dstsize - 1 && src [i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }   
    if(i < dstsize)
        dst[i] = '\0';   
        
    while(src[i] != '\0')
        i++;
    return (i);
}
#include <string.h>
#include <stdio.h>
#include "libft.h"
int     memcmp(const void* s1, const void* s2, size_t num)
{
    size_t  i;
    
    i = 0;
    while(i < num)
    {
        if(*((unsigned char*)s1 + i) != *((unsigned char *)s2 + i))
            return (*((unsigned char *)s1 + i) - *((unsigned char *)s2 + i));
        i++;
    }
    return (0);
}

int main()
{
    char *str1 = "acd";
    char *str2 = "abcd";

    printf("%d", memcmp(str1, str2, 0));
}
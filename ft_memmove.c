#include "libft.h"
#include <stdio.h>
#include <string.h>
void *ft_memcpy(void *dest, const void *src, size_t len)
{
    if (!dest)
        return (NULL);

    char *tmp = dest;
    const char *s = src;

    while (len--)
        *tmp++ = *s++;

    return dest;
}
void    *ft_memmove(void *dest, const void *src, size_t n)
{
    if(src <= dest)
    {
        while(n--)
            ((unsigned char *)dest)[n] = ((unsigned char *)src)[n];

    }
    else
        ft_memcpy(dest, src, n);
    
    return ((void *)dest);
}

int main()
{
	char dst[50] = "Je ne suis";
	char dst4[50] = "Je ne suis";
	char dst2[20];
	char dst3[20];
	char *str = "Decideriez vous de m'accorde quelqus minutes por favor ?";
	char *str2 = "por favor no";
	
	printf("ft_memmove->%s\n", ft_memmove(dst2, str, 0));
	printf("   memmove->%s\n", memmove(dst2, str, 0));

	printf("ft_memmove->%s\n", ft_memmove(dst2, NULL, 0));
	printf("   memmove->%s\n", memmove(dst2, NULL, 0));

	printf("ft_memmove->%s\n", ft_memmove(NULL, str, 0));
	printf("   memmove->%s\n", memmove(NULL, str, 0));
	printf("ft_memmove->%s\n", ft_memmove(NULL, NULL, 20));
	printf("   memmove->%s\n", memmove(NULL, NULL, 20));
	printf("ft_memmove->%s\n", ft_memmove(NULL, NULL, 0));
	printf("   memmove->%s\n", memmove(NULL, NULL, 0));
	printf("ft_memmove->%s\n", ft_memmove(dst, dst+10, 40));
	printf("   memmove->%s\n", memmove(dst4, dst4+10, 40));
	printf("ft_memmove->%s\n", ft_memmove(dst + 10, dst, 40));
	printf("   memmove->%s\n", memmove(dst4 + 10, dst4, 40));
	(void)dst;
	(void)dst2;
	(void)str;
	(void)str2;
}
#include "libft.h"
#include <stdio.h>
#include <string.h>

void    *ft_memmove(void *dest, const void *src, size_t n)
{
	char	*cdest;
	char	*csrc;
	size_t	i;

    if(src <= dest)
    {
        while(n--)
            ((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
    }
    else
	{
		i = 0;
		while(i < n)
		{
			cdest[i] = csrc[i];
			i++;
		}
	}
    
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
	
	printf("ft_memmove->%s\n", ft_memmove(dst2, str2, 0));
	printf("   memmove->%s\n", memmove(dst2, str2, 0));

	printf("ft_memmove->%s\n", ft_memmove(dst2, NULL, 0));
	printf("   memmove->%s\n", memmove(dst2, NULL, 0));

	printf("ft_memmove->%s\n", ft_memmove(NULL, str2, 0));
	printf("   memmove->%s\n", memmove(NULL, str2, 0));
	printf("ft_memmove->%s\n", ft_memmove(NULL, NULL, 20));
	printf("   memmove->%s\n", memmove(NULL, NULL, 20));
	printf("ft_memmove->%s\n", ft_memmove(NULL, NULL, 0));
	printf("   memmove->%s\n", memmove(NULL, NULL, 0));
	printf("ft_memmove->%s\n", ft_memmove(dst, dst+10, 40));
	printf("   memmove->%s\n", memmove(dst4, dst4+10, 40));
	printf("ft_memmove->%s\n", ft_memmove(dst + 10, dst, 40));
	printf("   memmove->%s\n", memmove(dst4 + 10, dst4, 40));
	
}
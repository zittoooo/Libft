#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char    *ptr;
    int     i;
    int     j;

    ptr = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    if (!ptr)
        return (NULL);

    i = 0;
    j = 0;
    while (s1[i])
        ptr[j++] = s1[i++];

    i = 0;
    while (s2[i])
        ptr[j++] = s2[i++];

    ptr[j] = '\0';
    return (ptr);
}

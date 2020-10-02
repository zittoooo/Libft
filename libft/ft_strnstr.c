#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	len_s2;

	if (*s2 == '\0')
		return ((char *)s1);
	len_s2 = ft_strlen(s2);

	while (s1 != '\0' && n-- >= len_s2)
	{
		if (*s1 == *s2 && ft_memcmp(s1, s2, len_s2) == 0)
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}

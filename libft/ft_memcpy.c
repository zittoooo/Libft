#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	if (!dest)
		return (NULL);

	char		*tmp;
	const char	*s;

	tmp = (char *)dest;
	s = src;
	while (len--)
		*tmp++ = *s++;

	return (dest);
}

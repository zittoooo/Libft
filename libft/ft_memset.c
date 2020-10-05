#include "libft.h"

void	*ft_memset(void *dest, int fillchar, size_t len)
{
	size_t	i;

	i = 0;

	while (i < len)
	{
		*((unsigned char *)dest + i) = (unsigned char)fillchar;
		i++;
	}

	return (dest);
}

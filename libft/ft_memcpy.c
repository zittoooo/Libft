#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*new_dest;
	unsigned char	*new_src;

	new_dest = (unsigned char *)dest;
	new_src = (unsigned char *)src;
	i = 0;
	
	if(!len || dest == src)
		return (dest);
	while(len--)
	{
		*new_dest++ = *new_src++;
	}
	return (dest);
}

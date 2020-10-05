#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	idx;

	if (!dst && !src)
		return (0);
	if (dst > src)
	{
		idx = len - 1;
		while (idx >= 0)
		{
			((char *)dst)[idx] = ((char *)src)[idx];
			idx--;
		}
	}
	else
	{
		idx = 0;
		while ((size_t)idx < len)
		{
			((char *)dst)[idx] = ((char *)src)[idx];
			idx++;
		}
	}
	return (dst);
}

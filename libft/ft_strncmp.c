#include "libft.h"

int		strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	const unsigned char	*p1;
	const unsigned char	*p2;

	i = 0;
	p1 = (unsigned char)s1;
	p2 = (unsigned char)s2;

	while (p1[i] != '\0' && p2[i] != '\0' && i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}

	if (p1[i] != p2[i] && i != n)
		return (p1[i] - p2[i]);

	return (0);
}

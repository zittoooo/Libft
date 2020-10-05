#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*cp;
	size_t	i;

	cp = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1)); 
	if (!cp)
		return (NULL);

	i = 0;
	while (str[i])
	{
		cp[i] = str[i];
		i++;
	}
	cp[i] = '\0';
	return (cp);
}

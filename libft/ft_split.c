#include "libft.h"


static int		count_words(char *str, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;

	while(str[i])
	{
		if(str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}
static int		words_len(char const *s, char c)
{
	int			i;
	int			len;

	i = 0;
	len = 0;
	while(s[i] != c && s[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

static void		*lead(char **splitted, int words)
{
	int	i;

	i = 0;
	while(i < words)
	{
		free(splitted[i]);
		i++;
	}
	free(splitted);
	return (NULL);
}
static char		**fill(char const *s, int words, char c, char **splitted)
{
	int	i;
	int j;
	int len;

	i = -1;
	while(++i < words)
	{
		while(*s == c)
			s++;

		len = words_len(s, c);
		if(!(splitted[i] = (char *)malloc(sizeof(char) * (len + 1))))
			return (leak(splitted, i));
		j = 0;
		while(j < len)
			splitted[i][j++] = *s++;
		splitted[i][j] = '\0';
	}
	splitted[i] = NULL;
	return (splitted);
}

char			**ft_split(char const *str, char c)
{
	char	**splitted;
	int		words;

	if(!str)
		return (NULL);

	words = count_words(str, c);
	if(!(splitted = (char **)malloc(sizeof(char *) * (words + 1))))
		return (NULL);
	splitted = fill(str, words, c, splitted);
	return (splitted);
}

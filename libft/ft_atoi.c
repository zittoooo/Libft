#include "libft.h"

static int	ft_isspace(char c)
{
	if(c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int		ft_atoi(const char *str)
{
	int	res;
	int sign;

	res = 0;
	sign = 1;
	while(ft_isspace(*str))
		str++;
	if(*str == '-' || *str == '+')
	{
		if(*str == '-')
			sign = -1;
		str++;
	}
	while(*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str -'0');
		str++;
	}
	return (sign * res);
}

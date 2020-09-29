#include "libft.h"

int ft_atoi(const char *str)
{
    int sign;
    int res;
    int i;

    res = 0;
    sign = 1;
    i = 0;

    while (*str && (*str == ' ' || *str == '\n' || *str == '\t' ||
                    *str == '\v' || *str == '\f' || *str == '\r'))
        ++str;
    if (*str == '-')
        sign = -1;

    if (*str == '-' || *str == '+')
        ++str;
    while (*str && *str >= '0' && *str <= '9')
    {
        res = res * 10 + (*str - '0');
        ++str;
    }
    return (res * sign);
}
#include <stdio.h>
#include <string.h>

void main()
{

	printf("ft_atoi->%d\n", ft_atoi(""));
	printf("   atoi->%d\n", atoi(""));
	printf("ft_atoi->%d\n", ft_atoi("                                                                            "));
	printf("   atoi->%d\n", atoi("                                                                             "));
	printf("ft_atoi->%d\n", ft_atoi("99999999999999999999999999999999999999999999999999999999999999999999999"));
	printf("   atoi->%d\n", atoi("999999999999999999999999999999999999999999999999999999999999999999999999"));
	printf("ft_atoi->%d\n", ft_atoi("--------------------------------------------------------"));
	printf("   atoi->%d\n", atoi("---------------------------------------------------------"));
	printf("ft_atoi->%d\n", ft_atoi("      + 5668412"));
	printf("   atoi->%d\n", atoi("      + 5668412"));
}
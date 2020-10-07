/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiholee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 14:29:58 by jiholee           #+#    #+#             */
/*   Updated: 2020/10/07 14:30:00 by jiholee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_abs(int n)
{
	return ((n < 0) ? -n : n);
}

static void		ft_strrev(char *str)
{
	int		len;
	int		i;
	char	tmp;

	len = ft_strlen(str);
	i = 0;
	while (i < len / 2)
	{
		tmp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = tmp;
		i++;
	}
}

char			*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		is_neg;

	is_neg = (n < 0);
	if (!(str = ft_calloc(11 + is_neg, sizeof(*str))))
		return (NULL);
	if (is_neg == 0)
		str[0] = '0';
	len = 0;
	while (n != 0)
	{
		str[len++] = '0' + ft_abs(n % 10);
		n /= 10;
	}
	if (is_neg)
		str[len] = '-';
	ft_strrev(str);
	return (str);
}

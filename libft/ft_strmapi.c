/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiholee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 14:27:57 by jiholee           #+#    #+#             */
/*   Updated: 2020/10/07 14:27:58 by jiholee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*newstr;
	unsigned int	len;
	unsigned int	idx;

	if (s == 0 || f == 0)
		return (NULL);
	len = ft_strlen(s);
	newstr = (char *)malloc(sizeof(char) * (len + 1));
	if (newstr == 0)
		return (NULL);
	idx = 0;
	while (s[idx])
	{
		newstr[idx] = f(idx, s[idx]);
		idx++;
	}
	newstr[idx] = '\0';
	return (newstr);
}

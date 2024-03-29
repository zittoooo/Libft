/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiholee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 14:28:19 by jiholee           #+#    #+#             */
/*   Updated: 2020/10/07 14:29:36 by jiholee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	str_len;

	if (!s1 | !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	str_len = ft_strlen(s1);
	if (str_len == 0)
		str = ft_calloc(1, 1);
	else
	{
		while (ft_strchr(set, s1[str_len - 1]))
			str_len--;
		str = ft_substr(s1, 0, str_len);
	}
	return (str);
}

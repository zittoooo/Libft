/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiholee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 14:30:18 by jiholee           #+#    #+#             */
/*   Updated: 2020/10/07 14:30:23 by jiholee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	unsigned char	char_c;
	size_t			i;

	src = (unsigned char *)s;
	char_c = (unsigned char)c;
	i = 0;
	while (n--)
	{
		if (src[i] == char_c)
			return (src + i);
		i++;
	}
	return (NULL);
}

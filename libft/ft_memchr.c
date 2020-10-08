/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiholee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 14:30:18 by jiholee           #+#    #+#             */
/*   Updated: 2020/10/08 18:11:15 by jiholee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	unsigned char	char_c;
	int				i;

	src = (unsigned char *)s;
	char_c = (unsigned char)c;
	i = 0;
	while (n-- > 0)
	{
		if (src[i] == char_c)
			return (src + i);
		i++;
	}
	return (NULL);
}

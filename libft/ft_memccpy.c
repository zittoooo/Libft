/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiholee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 14:30:51 by jiholee           #+#    #+#             */
/*   Updated: 2020/10/07 14:30:55 by jiholee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	const unsigned char		*source;
	unsigned char			*dest;

	source = (unsigned char *)src;
	dest = (unsigned char *)dst;
	while (n--)
	{
		*dest++ = *source;
		if (*source == (unsigned char)c)
			return ((void *)dest);
		source++;
	}
	return (NULL);
}

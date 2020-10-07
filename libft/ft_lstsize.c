/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiholee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 14:25:52 by jiholee           #+#    #+#             */
/*   Updated: 2020/10/07 14:45:04 by jiholee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*p;

	if (!lst)
		return (0);
	count = 0;
	p = lst;
	while (p != NULL)
	{
		count++;
		p = p->next;
	}
	return (count);
}

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*p;
	if (!lst || !new)
		return ;

	if (*lst == NULL)
		*lst = new;
	else
	{
		p = *lst;
		while (p->next != 0)
			p = p->next;
		p->next = new;
	}
}

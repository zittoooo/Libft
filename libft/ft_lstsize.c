#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	if(!lst)
		return (0);
	int		count;
	t_list	*p;

	count = 0;
	p = lst;

	while(p != NULL)
	{
		count++;
		p = p->next;
	}
	return (count);
}

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*element;
	element = (t_list *)ft_calloc(1, sizeof(t_list));
	if(element == 0 )
		return (0);
	element->content = content;
	element->next = 0;
	return (element);
}

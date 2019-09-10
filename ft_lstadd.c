#include "libft.h"

void		ft_lstadd(t_list **alst, t_list *new)
{
	t_list *list;

	if (alst && new)
	{
		list = (*alst)->next;
		((*alst)->next) = new;
		new->next = list;
	}
}

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list *now;

	if (lst && f)
	{
		now = lst;
		while (now)
		{
			f(now);
			now = now->next;
		}
	}
}

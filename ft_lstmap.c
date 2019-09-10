#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list * (*f) (t_list *elem))
{
	t_list *now;

	if (lst && f)
	{
		while (lst)
		{
			now = f(lst);
			lst = lst->next;
		}
	}
	return (NULL);
}

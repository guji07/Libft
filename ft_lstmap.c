/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarkbit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 10:14:03 by tgarkbit          #+#    #+#             */
/*   Updated: 2019/09/11 10:14:13 by tgarkbit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f) (t_list *elem))
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

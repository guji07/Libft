/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarkbit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 13:59:14 by tgarkbit          #+#    #+#             */
/*   Updated: 2019/09/04 14:08:36 by tgarkbit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memmove(void *destination, const void *source, size_t n)
{
	int 	i;

	i = -1;
	if (source > destination)
	{
		while (++i <(int)n)
			((char*)destination)[i] = ((char*)source)[i];
		((char*)destination)[i] = '\0';
	}
	else if (source < destination)
	{
		i = n;
		while (--i >= 0)
			((char*)destination)[i] = ((char*)source)[i];
		((char*)destination)[n] = '\0';
	}
	return (destination);
}

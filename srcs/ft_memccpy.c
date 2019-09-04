/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarkbit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 13:54:30 by tgarkbit          #+#    #+#             */
/*   Updated: 2019/09/04 14:00:15 by tgarkbit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memccpy(void *dest, const void *source, int ch, size_t count)
{
	int i;

	i = -1;
	while (((char*)source)[++i] && (i < (int)count))
	{
		if ((((int)(((char*)dest)[i] = ((char*)(source))[i])) == ch))
			return ((char*)(dest) + i);
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarkbit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 14:02:05 by tgarkbit          #+#    #+#             */
/*   Updated: 2019/09/04 14:02:06 by tgarkbit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	int		i;

	i = -1;
	while (i++ < (int)size)
		((char *)dest)[i] = ((char *)src)[i];
	((char *)dest)[i] = '\0';
	return (dest);
}

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
	unsigned	char	*copy;
	int					i;

	if (destination == NULL && source == NULL)
		return (NULL);
	if (((copy = (unsigned char*)
			malloc(sizeof(unsigned char) * n + 1)) != NULL) && n != 0)
	{
		i = -1;
		while ((++i) < (int)(n))
			copy[i] = ((unsigned char *)source)[i];
		copy[i] = '\0';
		i = -1;
		while ((++i) < (int)(n))
			((unsigned char *)destination)[i] = copy[i];
		((unsigned char*)destination)[i] = '\0';
	}
	return (destination);
}

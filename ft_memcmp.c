/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarkbit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 14:01:59 by tgarkbit          #+#    #+#             */
/*   Updated: 2019/09/04 14:06:09 by tgarkbit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *buf1, const void *buf2, size_t count)
{
	long	long i;

	i = -1;
	if (buf1 || buf2)
	{
		while (++i != (long long)(count - 2))
		{
			if (((unsigned char *)buf1)[i])
				if (((unsigned char*)buf1)[i] != ((unsigned char*)buf2)[i])
					return (((unsigned char*)buf1)[i] -
					((unsigned char*)buf2)[i]);
		}
		return ((((unsigned char*)buf1)[i] - ((unsigned char*)buf2)[i]));
	}
	return (0);
}

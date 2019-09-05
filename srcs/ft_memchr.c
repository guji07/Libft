/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarkbit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 14:00:09 by tgarkbit          #+#    #+#             */
/*   Updated: 2019/09/04 14:05:27 by tgarkbit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	int i;

	i = 0;
	while (((char*)arr)[i] && (i * sizeof(char)) < n)
	{
		if (((char*)arr)[i] == c)
			return (void *)(arr + i);
		i++;
	}
	if ((size_t)i <= n && c == '\0')
		return (void *)(arr + i);
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarkbit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 14:20:40 by tgarkbit          #+#    #+#             */
/*   Updated: 2019/09/04 16:12:46 by tgarkbit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t count)
{
	int		i;
	int		j;

	i = 0;
	while (dst[i] != '\0')
		i++;
	j = -1;
	while (src[++j] && (count--))
		dst[i++] = src[j];
	dst[i] = '\0';
	return ((size_t)ft_strlen(dst));
}

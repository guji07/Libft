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

size_t		ft_strlcat(char *str1, const char *str2, size_t count)
{
	int		i;
	int		j;

	i = 0;
	j = -1;
	while (str1[i])
		i++;
	while (str2[++j] && j < (int)count - 1)
		str1[i++] = str2[j];
	str1[i] = '\0';
	return ((size_t)ft_strlen(str1));
}

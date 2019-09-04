/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarkbit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 16:54:14 by tgarkbit          #+#    #+#             */
/*   Updated: 2019/09/04 14:00:47 by tgarkbit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int i;
	int n;

	if ((*to_find) == '\0')
		return (char *)(str);
	i = 0;
	while ((*(str + i) != '\0'))
	{
		n = 0;
		while ((*(to_find + n)) != '\0')
		{
			if (*(str + i + n) != *(to_find + n))
				break ;
		}
		if (*(to_find + n) == '\0')
			return (char *)(str + i);
		i++;
	}
	return (0);
}

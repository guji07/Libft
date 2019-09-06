/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarkbit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 22:01:46 by tgarkbit          #+#    #+#             */
/*   Updated: 2019/09/04 14:28:45 by tgarkbit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int		i;

	i = -1;
	while ((s1[++i] != '\0' || s2[i] != '\0') && (i < (int)n))
	{
		if (s1[i] != s2[i])
			return (unsigned char)(s1[i] - s2[i]);
	}
	return (unsigned char)(s1[i] - s2[i]);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarkbit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 14:17:52 by tgarkbit          #+#    #+#             */
/*   Updated: 2019/09/04 14:29:44 by tgarkbit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int i;

	i = -1;
	while (s1[++i] && s2[i] && i < (int)n)
	{
		if (s1[i] != s2[i])
			return (0);
	}
	if (i == (int)(n - 1))
		if (s1[i] == s2[i])
			return (1);
	return (0);
}

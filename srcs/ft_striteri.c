/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarkbit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 14:15:56 by tgarkbit          #+#    #+#             */
/*   Updated: 2019/09/04 14:15:57 by tgarkbit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int i;

	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}

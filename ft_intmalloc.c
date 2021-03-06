/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intmalloc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarkbit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 18:00:54 by tgarkbit          #+#    #+#             */
/*   Updated: 2019/11/19 18:02:14 by tgarkbit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			*ft_intmalloc(int len)
{
	int		*a;
	int		i;

	a = (int*)malloc(len * sizeof(int));
	i = 0;
	while (i < len - 1)
		a[i++] = 0;
	return (a);
}

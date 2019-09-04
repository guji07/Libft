/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarkbit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 14:07:40 by tgarkbit          #+#    #+#             */
/*   Updated: 2019/09/04 14:08:03 by tgarkbit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	int i;

	i = -1;
	while (s[--i])
	{
		ft_putchar_fd(s[i], fd);
	}
	ft_putchar_fd('\n', fd);
	ft_putchar_fd('\0', fd);
}

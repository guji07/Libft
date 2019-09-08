/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarkbit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 14:11:26 by tgarkbit          #+#    #+#             */
/*   Updated: 2019/09/04 14:11:59 by tgarkbit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		n;
	char	*str;
	int		j;

	if (s)
	{
		j = 0;
		i = 0;
		n = ft_strlen(s) - 1;
		while (s[i] && (s[i] == '\t' || s[i] == ' ' || s[i] == '\n'))
			i++;
		while (n >= 0 && (s[n - 1] == '\t' || s[n - 1] == ' ' || s[n - 1] == '\n'))
			n--;
		if (i == ft_strlen(s) && *s)
			return ("");
		if ((str = (char*)malloc(n - i + 1)))
		{
			ft_strncpy(str, s + i, n - i);
			str[n - i] = '\0';
			return (str);
		}
		str = NULL;
	}
	return (NULL);
}

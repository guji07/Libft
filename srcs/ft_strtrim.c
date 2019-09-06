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

#include "../libft.h"

/*char	*ft_strtrim(char const *s)
{
	int		i;
	int		n;
	char	*str;
	int		j;

	j = 0;
	i = 0;
	while (s[i] == '\t' || s[i] == ' ' || s[i] == '\n')
		i++;
	n = ft_strlen(s + i);
	while (s[n + i] == '\t' || s[n + i] == ' ' || s[n + i] == '\n')
		n--;
	i--;
	if ((str = (char*)malloc(n + 1)))
	{
		while (++i <= n)
		{
			str[j] = s[i];
			j++;
		}
		str[j + 1] = '\0';
	}
	return (str);
}*/
char	*ft_strtrim(char const *s)
{
	int		i;
	int		n;
	char	*str;
	int		j;

	j = 0;
	i = 0;
	n = ft_strlen(s);
	if (!s)
		return (0);
	str = (char*)malloc(n + 1);
	if (str)
	{
		while (s[i] == '\t' || s[i] == ' ' || s[i] == '\n')
			i++;
		while (s[n - 1] == '\t' || s[n - 1] == ' ' || s[n - 1] == '\n')
			n--;
		i--;
		while (++i <= n - 1)
		{
			str[j] = s[i];
			j++;
		}
		str[j + 1] = '\0';
	}
	else
	{
		free(str);
		return (0);
	}
	return (str);
}
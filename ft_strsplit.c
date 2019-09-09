/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarkbit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 14:00:54 by tgarkbit          #+#    #+#             */
/*   Updated: 2019/09/08 18:19:14 by tgarkbit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_v(char *arr, int *i)
{
	*arr = '\0';
	(*i)--;
}

static	int		ft_words_num(const char *s, char c)
{
	int		i;
	int		n;

	n = 1;
	i = -1;
	while (s[++i])
		if (s[i] == c)
		{
			n++;
			while (s[i] == c && s[i])
				i++;
		}
	return (n);
}

static	int		ft_word_len(const char *s, char c)
{
	int		i;

	i = 0;
	while (s[i] == c && s[i])
		i++;
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	char	**arr;
	int		j;
	int		n;

	if ((arr = 0) || s)
		if ((arr = (char**)malloc(sizeof(char*) * ft_words_num((char*)s, c) + 1)))
		{
			i = -1;
			j = -1;
			while (s[++i] != '\0')
				if (s[i] == c || (i == 0 && s[i] != c))
				{
					while (s[i] == c)
						i++;
					if (s[i + 1 + (n = -1)] != '\0')
					{
						arr[++j] = (char *)ft_memalloc((ft_word_len(s + i, c) + 1));
						while (s[i] != c && s[i] != '\0')
							arr[j][++n] = s[i++];
						ft_v(&(arr[j][++n]), &i);
					}
				}
				arr[j + 1] = (char*)('\0');
		}
	return (arr);
}

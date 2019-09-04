/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarkbit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 14:00:54 by tgarkbit          #+#    #+#             */
/*   Updated: 2019/09/04 14:31:51 by tgarkbit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static	int		ft_words_count(const char *s, char c)
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

	arr = (char**)malloc(sizeof(char*) * ft_words_count((char*)s, c) + 1);
	i = -1;
	j = -1;
	while (s[++i] != '\0')
	{
		if (s[i] == c || (i == 0 && s[i] != c))
		{
			while (s[i] == c)
				i++;
			arr[++j] = (char*)malloc(sizeof(char) * ft_word_len(s + i, c));
			n = -1;
			while (s[i] != c && s[i] != '\0')
				arr[j][++n] = s[i++];
			arr[j][++n] = '\0';
			i--;
		}
	}
	arr[++j] = (char *)('\0');
	return (arr);
}

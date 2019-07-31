/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgarkbit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 16:54:14 by tgarkbit          #+#    #+#             */
/*   Updated: 2019/07/09 21:42:05 by tgarkbit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int n;

	if ((*to_find) == '\0')
		return (str);
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
			return (str + i);
		i++;
	}
	return (0);
}

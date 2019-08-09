#include "../libft.h"

char	*ft_strnew(size_t size)
{
	char    *str;
	int     i;

	i = 0;
	if ((str = malloc(size)))
	{
		while (i < size)
		{
			str[i] = '\0';
			i++;
		}
		return (str);
	}
	return (NULL);
}
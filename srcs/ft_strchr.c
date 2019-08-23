#include "../libft.h"

char	*ft_strchr(char *string, int symbol)
{
	int i;

	i = -1;
	while (string[++i])
		if (string[i] == symbol)
			return (string + i);
	return (0);
}
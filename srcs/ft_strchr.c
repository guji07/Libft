#include "../libft.h"

char	*ft_strchr(const char *string, int symbol)
{
	int i;

	i = -1;
	while (string[++i])
		if (string[i] == symbol)
			return (char *)(string + i);
	return (0);
}
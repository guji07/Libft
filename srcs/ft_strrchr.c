#include "../libft.h"

char	*ft_strrchr(char *string, int symbol)
{
	int i;
	char *point;

	point = 0;
	i = -1;
	while (string[++i])
		if (string[i] == symbol)
			point = string + i;
	return (point);
}
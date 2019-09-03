#include "../libft.h"

char	*ft_strdup(const char *str)
{
	char	*cpy;
	int		i;

	i = -1;
	if ((cpy = (char*)malloc(sizeof(char) * ft_strlen(str) + 1)))
	{
		while (str[++i])
			cpy[i] = str[i];
		cpy[i] = '\0';
	}
	return (cpy);
}
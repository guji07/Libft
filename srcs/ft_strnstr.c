#include "../libft.h"

char	*ft_strnstr(char *str, char *to_find, size_t len)
{
	int i;
	int n;

	if (*to_find == '\0')
		return (str);
	i = 0;
	while (*(str + i) != '\0' && i < (int)len)
	{
		n = 0;
		while ((*(to_find + n)) != '\0')
		{
			if (*(str + i + n) != *(to_find + n))
				break;
		}
		if (*(to_find + n) == '\0')
			return (str + i);
		i++;
	}
	return (NULL);
}

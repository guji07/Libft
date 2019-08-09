#include "../libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int 	i;

	if ((str = (char*)malloc(len + 1)))
	{
		i = start - 1;
		while (++i < start + len)
			str[i - start] = s[i];
		str[i] = '\0';
	}
	return (str);
}
#include "../libft.h"

char 	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	i = -1;
	str = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (str)
	{
		while (s[++i])
			str[i] = f((unsigned int)i, s[i]);
		str[i] = '\0';
	}
	return (str);
}
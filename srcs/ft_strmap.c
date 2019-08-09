#include "../libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		i;

	i = -1;
	str = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (str)
	{
		while (s[++i])
			str[i] = f(s[i]);
		str[i] = '\0';
	}
	return (str);
}
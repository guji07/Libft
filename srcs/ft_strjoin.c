#include "../libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int 	n;
	char	*str;
	int		i;

	i = -1;
	n = ft_strlen(s1) + ft_strlen(s2);
	if ((str = (char*)malloc(n + 1)))
	{
		while (s1[++i])
			str[i] = s1[i];
	}
	return(str);
}

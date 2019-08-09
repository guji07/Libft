#include "../libft.h"

int 	ft_strequ(char const *s1, char const *s2)
{
	int i;

	i = -1;
	while (s1[++i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (0);
	}
	if (s1[i] == s2[i])
		return (1);
	return (0);
}
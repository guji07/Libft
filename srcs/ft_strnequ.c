#include "../libft.h"

int 	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int i;

	i = -1;
	while (s1[++i] && s2[i] && i < (int)n)
	{
		if (s1[i] != s2[i])
			return (0);
	}
	if (i == (int)(n - 1))
		if (s1[i] == s2[i])
			return (1);
	return (0);
}
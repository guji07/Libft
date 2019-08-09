#include "../libft.h"

char 	*ft_strtrim(char const *s)
{
	int i;
	int n;
	char *str;
	int j;

	j = 0;
	i = 0;
	n = ft_strlen(s) - 1;
	if ((str = (char*)malloc(n + 2)))
	{
		while (s[i] == '\t' || s[i] == ' ' || s[i] == '\n')
			i++;
		while (s[n] == '\t' || s[n] == ' ' || s[n] == '\n')
			n--;
		i--;
		while (++i <= n)
		{
			str[j] = s[i];
			j++;
		}
		str[j] = '\0';
	}
	return (str);
}
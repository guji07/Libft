#include "../libft.h"

char	*ft_strncat(char *str1, char *str2, size_t count)
{
	int i;
	int j;

	i = 0;
	j = -1;
	while (str1[i])
		i++;
	while(str2[++j] && j < (int)count)
		str1[i++] = str2[j];
	return (str1);
}

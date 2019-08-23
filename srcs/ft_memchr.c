#include "../libft.h"

void	*ft_memchr (void *arr, int c, size_t n)
{
	int i;

	i = 0;
	while(((char*)arr)[i] && (i * sizeof(char)) < n)
	{
		if (((char*)arr)[i] == c)
			return (arr + i);
		i++;
	}
	return (NULL);
}
#include "../libft.h"

void	*ft_memchr (const void *arr, int c, size_t n)
{
	int i;

	i = 0;
	while(((char*)arr)[i] && (i * sizeof(char)) < n)
	{
		if (((char*)arr)[i] == c)
			return (void *)(arr + i);
		i++;
	}
	return (NULL);
}

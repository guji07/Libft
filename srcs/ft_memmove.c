#include "../libft.h"

void	*ft_memmove (void *destination, const void *source, size_t n)
{
	char *copy;
	int i;

	if ((copy = (char*)malloc(sizeof(char) * n + 1)) != NULL)
	{
		i = 0;
		while ((i) < (int)(n) && ((char *)source)[i] != '\0')
		{
			copy[i] = ((char *) source)[i];
			i++;
		}
		copy[i] = '\0';
		i = -1;
		while (copy[++i])
			((char *)destination)[i] = copy[i];
		((char*)destination)[i] = '\0';
	}
	return (destination);
}

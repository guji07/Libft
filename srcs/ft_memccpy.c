#include "../libft.h"

void 	*ft_memccpy(void *dest, const void *source, int ch, size_t count)
{
	int i;

	i = -1;
	while (((char*)source)[++i] && (i < (int)count))
	{
		if ((((int)(((char*)dest)[i] = ((char*)(source))[i])) == ch))
			return ((char*)(dest) + i);
	}
	return (NULL);
}
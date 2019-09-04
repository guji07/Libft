#include "../libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	int		i;

	i = -1;
	while (i++ < (int)size)
		((char *)dest)[i] = ((char *)src)[i];
	((char *)dest)[i] = '\0';
	return (dest);
}

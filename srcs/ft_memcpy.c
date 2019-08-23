#include "../libft.h"

void	*ft_memcpy(void *dst, void *src, size_t size)
{
	char *start;

	start = (char*)dst;
	while ((*(char*)src) != '\0' && (size-- > 0))
	{
		*((char*)dst) = *((char*)src);
		(char*)src++;
		(char*)dst++;
	}
	(*((char*)dst)) = '\0';
	return (start);
}

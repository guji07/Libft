#include "../libft.h"

void	*ft_memcpy(void *dest, void *src, size_t size)
{
	char *start;

	start = (char*)dest;
	while ((*(char*)src) != '\0' && (size-- > 0))
	{
		*((char*)dest) = *((char*)src);
		(char*)src++;
		(char*)dest++;
	}
	(*((char*)dest)) = '\0';
	return (start);
}

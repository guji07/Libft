#include "../libft.h"

void	*ft_memalloc(size_t size)
{
	void *pointer;

	if ((pointer = malloc(size)))
		ft_bzero(pointer, size);
	return (pointer);
}
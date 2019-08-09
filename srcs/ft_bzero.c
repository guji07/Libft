#include "../libft.h"

void	ft_bzero(void *s, size_t n)
{
	int i;

	i = 0;
	while((i++) < n)
		((char*)s)[i - 1] = '\0';
}

#include "../libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	int i;
	i = 0;
	while (sizeof(*s) * (++i) < n)
	{
		((char*)s)[i - 1] = (char)c;
	}
	return (s);
}

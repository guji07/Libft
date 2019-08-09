#include "../libft.h"

int		ft_memcmp(void *buf1, void *buf2, size_t count)
{
	int i;

	i = 0;
	while (i != (count - 1))
	{
		if ((((char*)buf1)[i]) && (((char*)buf1)[i]))
			if (((char*)buf1)[i] != ((char*)buf2)[i])
				return (((char*)buf1)[i] > ((char*)buf2)[i] ? 1 : -1 );
		if (!((char*)buf1)[i])
			return (-1);
		if (!((char*)buf2)[i])
			return (1);
		i++;
	}
	return (0);
}
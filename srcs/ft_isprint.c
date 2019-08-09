#include "../libft.h"

int		ft_isprint(int ch)
{
	if (ch >= 32 && ch <= 127)
		return (1);
	return (0);
}
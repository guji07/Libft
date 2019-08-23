#include "../libft.h"

char	*ft_strcpy(char *destptr, const char *srcptr)
{
	int i;

	i = -1;
	while (srcptr[(++i)])
		destptr[i] = srcptr[i];
	destptr[i] = '\0';
	return (destptr);
}
#include "../libft.h"

char 	*ft_strncpy( char * destptr, const char * srcptr, size_t num )
{
	int i;

	i = -1;
	while (srcptr[++i] && i < num)
		destptr[i] = srcptr[i];
	if (srcptr[i] == '\0')
		(destptr[i] = '\0');
	return (destptr);
}
#include "../libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t count)
{
	int i;
	int j;

	i = 0;
	while (dst[(i)] != '\0')
		i++;
	j = -1;
	while (src[++j] && (count--))
		dst[i++] = src[j];
	dst[i] = '\0';
	return ((size_t)ft_strlen(dst));
}
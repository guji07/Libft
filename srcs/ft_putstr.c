#include "../libft.h"

void	ft_putstr(char const *s)
{
	int i;

	i = -1;
	while (s[++i])
		ft_putchar(s[i]);
}
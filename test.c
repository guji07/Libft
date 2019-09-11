#include "libft.h"
#include <stdio.h>

int		main(void)
{
	printf("atoi:    [%i]\n",    atoi("9223372036854775807")); //long long
	printf("ft_atoi: [%i]\n",  ft_atoi("9223372036854775807"));
	printf("atoi:    [%i]\n",    atoi("9223372036854775808")); //long long + 1
	printf("ft_atoi: [%i]\n",  ft_atoi("9223372036854775808"));
	printf("atoi:    [%i]\n",    atoi("9999999999999999999999999"));
	printf("ft_atoi: [%i]\n",  ft_atoi("9999999999999999999999999"));
	printf("atoi:    [%i]\n",    atoi("9221231231233372036854775807"));
	printf("ft_atoi: [%i]\n",  ft_atoi("9221231231233372036854775807"));
	return (0);
}
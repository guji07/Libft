#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "libft.h"

int     		main(void)
{
	int i = 0;
	for (i = 0; i < 5; i++)
		printf("[%s]\n", (ft_strsplit("123D321D123  \t\nD33 3Jaj", 'D'))[i]);
	printf("\nS D v nachale:\n");
	for (i = 0; i < 5; i++)
		printf("[%s]\n", (ft_strsplit("123D321D123  \t\nD33 3Jaj", 'D'))[i]);
	return (0);
}
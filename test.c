#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "libft.h"


int     main(void)
{
	printf("[%s]", (ft_strsplit("abc2bvf\n", 'b'))[0]);
	printf("[%s]", (ft_strsplit("abc2bvf\n", 'b'))[1]);
	printf("[%s]", (ft_strsplit("abc2bvf\n", 'b'))[2]);
	return (0);
}
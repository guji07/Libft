#include "libft.c"
#include <string.h>
#include <stdio.h>
#include <ctype.h>

int     main(void)
{
	char s1[6] = "1234";
    char const s2[101] = "\n\t 12\t\t   34    \n\t  \n";
    printf("ft_strtrim: {%s}", ft_strtrim(s2));
	return (0);
}
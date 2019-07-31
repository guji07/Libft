#include "libft.c"
#include <string.h>
#include <stdio.h>
int     main(void)
{
	char s1[6] = "1234";
	char s2[17] = "abcdegfhxer";
	char s3[6] = "t1321";
	char s4[11] = "abcdegfhtt";
	ft_strncat(s2,s1,0);
	printf("s2:%s", s2);
	return (0);
}
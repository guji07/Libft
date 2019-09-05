#include <string.h>
#include <stdio.h>
#include "libft.h"
int 	main(void)
{
	//ft_memmove
	/*char *src = "thi\xffs i\xfas \0a g\xde\xadood \0nyan\0cat\0 !\r\n";
	int size = 33;
	char dst1[0xF0];
	char dst2[0xF0];
	memmove(dst1, src , size);
	printf("r1: [%s]\n", dst1);
	ft_memmove(dst2, src, size);
	printf("r2: [%s]\n", dst2);
	return (0);*/
	printf("%s", ft_strjoin("123", "456"));
}
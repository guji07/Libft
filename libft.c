#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
    int i;

    i = 0;
    while (sizeof(*s) * (++i) < n)
    {
        ((char*)s)[i - 1] = c;
    }
    return (s);
}

void	ft_bzero(void *s, size_t n)
{
	int i;

	i = 0;
	while(sizeof(*s) * (i++) < n)
		((char*)s)[i - 1] = '\0';
}

void	*ft_memcpy(void *dst, void *src, size_t size)
{
	char *start;

	start = (char*)dst;
	while ((*(char*)src) != '\0' && (size-- > 0))
	{
		*((char*)dst) = *((char*)src);
		(char*)src++;
		(char*)dst++;
	}
	(*((char*)dst)) = '\0';
	return (start);
}

void	*ft_memmove (void *destination, void *source, size_t n)
{
	char *copy;
	int i;

	if ((copy = (char*)malloc(sizeof(char) * n + 1)) != NULL)
	{
		i = 0;
		while ((i) < n && ((char *)source)[i] != '\0')
		{
			copy[i] = ((char *) source)[i];
			i++;
		}
		copy[i] = '\0';
		i = -1;
		while (copy[++i])
			((char *)destination)[i] = copy[i];
		((char*)destination)[i] = '\0';
	}
	return (destination);
}

void	*ft_memchr (void *arr, int c, size_t n)
{
	int i;

	i = 0;
	while(((char*)arr)[i] && (i * sizeof(char)) < n)
	{
		if (((char*)arr)[i] == c)
			return (arr + i);
		i++;
	}
	return (NULL);
}

int		ft_memcmp(void *buf1, void *buf2, size_t count)
{
	int i;

	i = 0;
	while (i != (count - 1))
	{
		if ((((char*)buf1)[i]) && (((char*)buf1)[i]))
			if (((char*)buf1)[i] != ((char*)buf2)[i])
				return (((char*)buf1)[i] > ((char*)buf2)[i] ? 1 : -1 );
			if (!((char*)buf1)[i])
				return (-1);
			if (!((char*)buf2)[i])
				return (1);
		i++;
	}
	return (0);
}

int		ft_strlen(char *str)
{
    int n;

    n = 0;
    while (str[n])
        n++;
    return (n);
}

char	*ft_strdup(char *str)
{
	char *cpy;
	int i;

	i = -1;
	if ((cpy = (char*)malloc(sizeof(char) * ft_strlen(str) + 1)))
	{
		while (str[++i])
			cpy[i] = str[i];
		cpy[i] = '\0';
	}
	return (cpy);
}

char	*ft_strcpy(char *destptr, const char *srcptr)
{
	int i;

	i = -1;
	while (srcptr[(++i)])
		destptr[i] = srcptr[i];
	destptr[i] = '\0';
	return (destptr);
}

char	*ft_strncpy( char * destptr, const char * srcptr, size_t num )
{
	int i;

	i = -1;
	while (srcptr[++i] && i < num)
		destptr[i] = srcptr[i];
	if (srcptr[i] == '\0')
		(destptr[i] = '\0');
	return (destptr);
}

char	*ft_strcat(char *str1, char *str2)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (str1[i])
        i++;
    while (str2[j])
    {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
    return (str1);
}

char 	*ft_strncat(char *str1, char *str2, size_t count)
{
	int i;
	int j;

	i = 0;
	j = -1;
	while (str1[i])
		i++;
	while(str2[++j] && j < count)
		str1[i++] = str2[j];
	return (str1);
}
char 	*ft_strlcpy(char *dst, const char *src, size_t size)
{

}
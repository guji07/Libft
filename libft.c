#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
    int i;

    i = 0;
    while (sizeof(*s) * (++i) < n)
    {
        ((char*)s)[i - 1] = (char)c;
    }
    return (s);
}

void	ft_bzero(void *s, size_t n)
{
	int i;

	i = 0;
	while((i++) < n)
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

int		ft_strlen(const char *str)
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

char 	*ft_strcat(char *str1, char *str2)
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

char	*ft_strncat(char *str1, char *str2, size_t count)
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

char	*ft_strchr(char *string, int symbol)
{
    int i;

    i = -1;
    while (string[++i])
        if (string[i] == symbol)
            return (string + i);
    return (0);
}

char	*ft_strrchr(char *string, int symbol)
{
    int i;
    char *point;

    point = 0;
    i = -1;
    while (string[++i])
        if (string[i] == symbol)
            point = string + i;
    return (point);
}

char	*ft_strnstr(char *str, char *to_find, size_t len)
{
    int i;
    int n;

    if (*to_find == '\0')
        return (str);
    i = 0;
    while (*(str + i) != '\0')
    {
        n = 0;
        while ((*(to_find + n)) != '\0')
        {
            if (*(str + i + n) != *(to_find + n))
                break;
        }
        if (*(to_find + n) == '\0')
            return (str + i);
        i++;
    }
    return (NULL);
}

int		ft_isalpha(int ch)
{
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		return (1);
	return (0);
}

int		ft_isdigit(int ch)
{
	if (ch >= '0' && ch <= '9')
		return (1);
	return (0);
}

int		ft_isalnum(ch)
{
	return (ft_isalpha(ch) || ft_isdigit(ch));
}

int		ft_isascii(int ch)
{
	if (ch >= 0 && ch <= 127)
		return (1);
	return (0);
}

int		ft_isprint(int ch)
{
	if (ch >= 32 && ch <= 127)
		return (1);
	return (0);
}

int		ft_toupper(int ch)
{
    if (ch >= 'a' && ch <= 'z')
        ch = ch - 32;
    return (ch);
}

int		ft_tolower(int ch)
{
    if (ch >= 'A' && ch <= 'Z')
        ch = ch + 32;
    return (ch);
}

void	*ft_memalloc(size_t size)
{
    void *pointer;

	if ((pointer = malloc(size)))
        ft_bzero(pointer, size);
    return (pointer);
}

void	ft_memdel(void **ap)
{
    free(*ap);
    *ap = NULL;
}

char	*ft_strnew(size_t size)
{
    char    *str;
    int     i;

    i = 0;
    if ((str = malloc(size)))
    {
        while (i < size)
        {
            str[i] = '\0';
            i++;
        }
        return (str);
    }
    return (NULL);
}

void	ft_strdel(char **as)
{
    free(*as);
    *as = NULL;
}

void	ft_strclr(char *s)
{
    int i;

    i = 0;
    while (s[i])
    {
        s[i] = '\0';
        i++;
    }
}

void	ft_striter(char *s, void (*f)(char *))
{
    int i;

    i = 0;
    while (s[i])
    {
        f(s + i);
        i++;
    }
}

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    int i;

    i = 0;
    while (s[i])
    {
        f(i, s + i);
        i++;
    }
}

char	*ft_strmap(char const *s, char (*f)(char))
{
    char	*str;
    int		i;

    i = -1;
    str = malloc((ft_strlen(s) + 1) * sizeof(char));
    if (str)
    {
		while (s[++i])
			str[i] = f(s[i]);
		str[i] = '\0';
	}
    return (str);
}

char 	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	i = -1;
	str = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (str)
	{
		while (s[++i])
			str[i] = f((unsigned int)i, s[i]);
		str[i] = '\0';
	}
	return (str);
}

int 	ft_strequ(char const *s1, char const *s2)
{
	int i;

	i = -1;
	while (s1[++i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (0);
	}
	if (s1[i] == s2[i])
		return (1);
	return (0);
}

int 	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int i;

	i = -1;
	while (s1[++i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return (0);
	}
	if (i == n - 1)
	if (s1[i] == s2[i])
		return (1);
	return (0);
}

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int 	i;

	if ((str = (char*)malloc(len + 1)))
	{
		i = start - 1;
		while (++i < start + len)
			str[i - start] = s[i];
		str[i] = '\0';
	}
	return (str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int 	n;
	char	*str;
	int		i;

	i = -1;
	n = ft_strlen(s1) + ft_strlen(s2);
	if ((str = (char*)malloc(n + 1)))
	{
		while (s1[++i])
			str[i] = s1[i];
	}
}

char 	*ft_strtrim(char const *s)
{
	int i;
	int n;
	char *str;
	int j;

	j = 0;
	i = 0;
	n = ft_strlen(s) - 1;
	if ((str = (char*)malloc(n + 2)))
	{
		while (s[i] == '\t' || s[i] == ' ' || s[i] == '\n')
			i++;
		while (s[n] == '\t' || s[n] == ' ' || s[n] == '\n')
			n--;
		i--;
		while (++i <= n)
		{
			str[j] = s[i];
			j++;
		}
		str[j] = '\0';
	}
	return (str);
} //ok

void	ft_putchar(char c)
{
	write(1, &c, 1);
} //ok

void	ft_putstr(char const *s) //ok
{
	int i;

	i = -1;
	while (s[++i])
		ft_putchar(s[i]);
}

void	ft_putendl(char const *s)
{
	ft_putstr(s);
	ft_putchar('\n');
}
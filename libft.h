#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <unistd.h>
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, void *src, size_t n);
void	*ft_memccpy(void *dest, const void *source, int ch, size_t count);
void	*ft_memmove(void *destination, const void *source, size_t n);
void	*ft_memchr(const void *arr, int c, size_t n);
int		ft_memcmp(const void *buf1,const void *buf2, size_t count);
int		ft_strlen(const char *str);
char	*ft_strdup(const char *str);
char	*ft_strcpy(char *destptr, const char *srcptr);
char	*ft_strncpy( char * destptr, const char * srcptr, size_t num);
char	*ft_strcat(char *str1, const char *str2);
char 	*ft_strncat(char *str1, const char *str2, size_t count);
size_t 	ft_strlcat(char *dst, char *src, size_t count);
char    *ft_strchr(const char *string, int symbol);
char    *ft_strrchr(const char *string, int symbol);
char    *ft_strstr(const char *str, const char *to_find);
char 	*ft_strnstr (char *str, char *to_find, size_t len);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_atoi(const char *str);
int		ft_isalpha(int ch);
int		ft_isdigit(int ch);
int 	ft_isalnum(int ch);
int 	ft_isascii(int ch);
int 	ft_isprint(int ch);
int 	ft_toupper(int ch);
int     ft_tolower(int ch);



void    *ft_memalloc(size_t size);
void    ft_memdel(void **ap);
char    *ft_strnew(size_t size);
void    ft_strdel(char **as);
void    ft_strclr(char *s);
void    ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmap(char const *s, char (*f)(char));
char 	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int 	ft_strequ(char const *s1, char const *s2);
int 	ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char 	*ft_strtrim(char const *s);
char	*ft_itoa(int n);
char	**ft_strsplit(char const *s, char c);
void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putendl(char const *s);
void	ft_putnbr(int nb);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);
#endif
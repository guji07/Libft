#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, void *src, size_t n);
void	*ft_memccpy(void *dest, const void *source, int ch, size_t count);
void	*ft_memmove(void *destination, void *source, size_t n);
void	*ft_memchr(void *arr, int c, size_t n);
int		ft_memcmp(void *buf1, void *buf2, size_t count);
int		ft_strlen(char *str);
char	*ft_strdup(char *str);
char	*ft_strcpy(char *destptr, const char *srcptr);
char	*ft_strncpy( char * destptr, const char * srcptr, size_t num);
char	*ft_strcat(char *str1, char *str2);
char 	*ft_strncat(char *str1, char *str2, size_t count);
size_t  ft_strlcat(char *dst, char *src, size_t count);
char    *ft_strchr(char *string, int symbol);
char    *ft_strrchr(char *string, int symbol);
char    *ft_strstr(char *str, char *to_find);
char 	ft_strnstr (char *str, char *to_find, size_t len);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
int		ft_atoi(char *str);
int		ft_isalpha(int ch);
int		ft_isdigit(int ch);
int 	ft_isalnum(int ch);
int 	ft_isascii(int ch);
int 	ft_isprint(int ch);
int 	ft_toupper(int ch);
int     ft_tolower(int ch);
#endif
#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>

void    *ft_memset(void *s, int c, size_t n);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dst, void *src, size_t n);
void    *ft_memccpy(void *dest, const void *source, int ch, size_t count);
void    *ft_memmove (void *destination, void *source, size_t n);
void    *ft_memchr (const void *arr, int c, size_t n);
int     ft_strlen(char *str);
char    *ft_strdup(char *str);


char    *ft_strncpy( char * destptr, const char * srcptr, size_t num );
char    *ft_strcat(char *str1, char *str2);

#endif
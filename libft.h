#include <stddef.h>
#include <stdio.h>
#include <string.h>
#ifndef LIBFT_H
#define LIBFT_H

size_t	ft_strlen(char *str);
size_t	ft_strlcpy(char *dest, char *src, size_t size);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
#endif
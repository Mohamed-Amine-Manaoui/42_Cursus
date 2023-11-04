#ifndef LIBFT_H
#define LIBFT_H
#include <stdio.h>
#include <stdlib.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int	ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
size_t ft_strlen(const char *str);
void *ft_memset(void *str, int value, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
void ft_bzero(void *str, size_t n);
//void *ft_memmove(void *dest, const void *src, size_t n);
size_t ft_strlcpy(char *dest, const char *src, size_t size);
//size_t ft_strlcat(char *dest, const char *src, size_t size);
int ft_toupper(int c);
int	ft_tolower(int c);
char *ft_strchr(const char *str, int c);
char *ft_strrchr(const char *str, int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
int ft_atoi(const char *str);
char *ft_strnstr(const char *big, const char *little, size_t len);
char *ft_strdup(const char *src);
void *ft_calloc(size_t num, size_t size);
char *ft_substr(char const *s, unsigned int start,size_t len);

#endif
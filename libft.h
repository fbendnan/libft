#ifndef LIBFT_H
#define LIBFT_H

#include <stddef.h>

int ft_isalnum(int c);
size_t ft_strlen(const char *str);
int ft_isprint(int c);
int ft_isdigit (int n);
int ft_isascii(int a);
int ft_isalpha (int c);
void *ft_memset(void *s, int c, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void ft_bzero(void *s, size_t n);
size_t ft_strlcpy(char *dst, const char *src, size_t size);

#endif
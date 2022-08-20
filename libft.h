/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 08:11:25 by thmusik           #+#    #+#             */
/*   Updated: 2022/08/20 09:22:55 by thmusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

int ft_atoi(const char *str);
void ft_bzero(void *s, size_t n);
void *ft_calloc(unsigned long count, unsigned long size);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
void *ft_memccpy(void *restrict dst, const void *restrict src,
				 int terminatebyte, size_t bytelenght);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memcpy(void *dst, const void *src, size_t bytesize);
void *ft_memmove(void *dst, const void *src, size_t len);
void *ft_memset(void *adress, int value, size_t bytelenght);
void ft_putchar_fd(char c, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
void ft_putstr_fd(char *s, int fd);
char *ft_strchr(const char *s, int c);
char *ft_strdup(const char *str);
size_t strlcat(char *restrict dst, const char *restrict src,
			   size_t size);
size_t ft_strlcpy(char *restrict dst, const char *restrict src,
				  size_t dstsize);
size_t ft_strlen(const char *str);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
char *ft_strrchr(const char *s, int c);
char *ft_substr(char const *s, unsigned int start, size_t len);
int ft_tolower(int c);
int ft_toupper(int c);

#endif
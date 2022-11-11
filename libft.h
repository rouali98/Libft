/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rouali <rouali@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:34:53 by rouali            #+#    #+#             */
/*   Updated: 2022/10/07 15:34:59 by rouali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int		ft_isalpha(int c);

int		ft_isdigit(int n);

int		ft_isalnum(char c);

int		ft_isascii(int c);

int		ft_isprint(int c);

size_t	ft_strlen(const char *str);

void	*ft_memset(void *m, int ch, size_t len);

void	ft_bzero(void *s, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n);

size_t	ft_strlcpy(char *dest, const char *src, size_t size);

size_t	ft_strlcat(char *dest, const char *src, size_t destsize);

int		ft_toupper(int c);

int		ft_tolower(int c);

char	*ft_strchr(const char *str, int searChr);

char	*ft_strrchr(const char *str, int searChr);

int		ft_strncmp(const char *s1, const char *s2, size_t n);

void	*ft_memchr(void *mb, int sc, size_t size);

int		ft_memcmp(const void *s1, const void *s2, size_t size);

char	*ft_strnstr(const char *s1, const char *s2, size_t n);

int		ft_atoi(const char *str);

void	*ft_calloc(size_t count, size_t size);

char	*ft_strdup(const char *s1);

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_strtrim(char const *s1, char const *set);

char	**ft_split(char const *s, char c);

char	*ft_itoa(int n);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

void	ft_striteri(char *s, void (*f)(unsigned int, char *));

void	ft_putchar_fd(char c, int fd);

void	ft_putstr_fd(char *s, int fd);

void	ft_putendl_fd(char *s, int fd);

void	ft_putnbr_fd(int n, int fd);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboutale <hboutale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:01:42 by hboutale          #+#    #+#             */
/*   Updated: 2024/11/01 14:17:26 by hboutale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>

int		ft_atoi(char *s);
void	ft_bzero(void *ptr, size_t size);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int arg);
int		ft_isprint(int c);
void	*ft_memchr(void *ptr, int c, size_t n);
int		ft_memcmp(void *str1_ptr, void *str2_ptr, size_t n);
void	*ft_memcpy(void *dest, void *src, size_t size);
void	*ft_memmove(void *dest_ptr, void *src_ptr, size_t size);
void	*ft_memset(void *ptr, int ch, size_t n);
char	*ft_strchr(char *str, int c);
size_t	ft_strlcat(char *dest, char *src, size_t size);
size_t	ft_strlcpy(char *dest, char *src, size_t size);
size_t	ft_strlen(char *s);
int		ft_strncmp(char *s1, char *s2, size_t n);
char	*ft_strnstr(char *haystack, char *needle, size_t len);
char	*ft_strrchr(char *str, int c);
char	ft_tolower(int c);
char	ft_toupper(int c);
void	*ft_calloc(size_t nelem, size_t elsize);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strdup(char *src);
char	**ft_split(char *str, char c);
#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilazar <ilazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 20:09:21 by htharrau          #+#    #+#             */
/*   Updated: 2025/01/30 15:22:42 by ilazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H


// GET NEXT LINE
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

# define MAX_FD 1024

char	*get_next_line(int fd);

char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *str);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strchr(const char *s, int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(const char *s1, const char *set);

//int		ft_atoi(const char *nptr);
// void	ft_bzero(void *s, size_t n);
// void	*ft_calloc(size_t nmemb, size_t size);
// int		ft_isalnum(int c);
// int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
// int		ft_isprint(int c);
// char	*ft_itoa(int n);
// void	*ft_memchr(const void *s, int c, size_t n);
// int		ft_memcmp(const void *s1, const void *s2, size_t n);
// void	*ft_memcpy(void *dest, const void *src, size_t n);
// void	*ft_memmove(void *dest, const void *src, size_t n);
// void	*ft_memset(void *s, int c, size_t n);
// void	ft_putchar_fd(char c, int fd);
// void	ft_putendl_fd(char *s, int fd);
// void	ft_putnbr_fd(int nb, int fd);
// void	ft_putstr_fd(char *s, int fd);
// char	**ft_split(char const *s, char c);

int	ft_strcmp(const char *s1, const char *s2);


char	*ft_strchr(const char *str, int c);
//char	*ft_strdup(char *src);

//char	*ft_strjoin(char const *s1, const char *s2);

size_t	ft_strlen(const char *str);

//int		ft_strncmp(const char *s1, const char *s2, size_t n);

#endif

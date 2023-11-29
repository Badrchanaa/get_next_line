/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchanaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 16:12:22 by bchanaa           #+#    #+#             */
/*   Updated: 2023/11/28 17:44:58 by bchanaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4096
# endif

# include <unistd.h>
# include <stdlib.h>

# if BUFFER_SIZE > SIZE_MAX
#  define BUFFER_SIZE_OK 0
# elif BUFFER_SIZE <= 0
#  define BUFFER_SIZE_OK 0
# else
#  define BUFFER_SIZE_OK 1
# endif

size_t	ft_strlen(const char *s);
void	*ft_memmove(void *dst, void *src, size_t len);
char	*ft_strnchr(const char *s, int c, size_t n);
char	*get_next_line(int fd);
char	*ft_strdup(char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif

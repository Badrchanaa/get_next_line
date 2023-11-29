/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchanaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:15:08 by bchanaa           #+#    #+#             */
/*   Updated: 2023/11/27 20:42:44 by bchanaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	*ft_memmove(void *dst, void *src, size_t len)
{
	size_t			i;
	unsigned char	*cdst;
	unsigned char	*csrc;

	i = 0;
	cdst = (unsigned char *)dst;
	csrc = (unsigned char *)src;
	if (dst < src)
	{
		while (i < len)
		{
			cdst[i] = csrc[i];
			i++;
		}
	}
	else if (src < dst)
	{
		i = len;
		while (i > 0)
		{
			cdst[i - 1] = csrc[i - 1];
			i--;
		}
	}
	return (dst);
}

char	*ft_strnchr(const char *s, int c, size_t n)
{
	size_t	i;
	char	cc;

	if (!s)
		return (0);
	cc = (char) c;
	i = 0;
	while (i < n)
	{
		if (s[i] == cc)
			return ((char *)(s + i));
		i++;
	}
	return (0);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*substr;
	size_t	sublen;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	sublen = len;
	if (s_len - start < len)
		sublen = s_len - start;
	if (start >= s_len)
		sublen = 0;
	substr = (char *)malloc(sizeof(char) * (sublen + 1));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < sublen && start + i < s_len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

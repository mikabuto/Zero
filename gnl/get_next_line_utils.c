/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urycherd <urycherd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 14:04:10 by urycherd          #+#    #+#             */
/*   Updated: 2021/12/16 18:58:10 by urycherd         ###   ########.fr       */
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

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*s;

	if (!(s1) || !(s2))
		return (0);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	s = (char *)malloc(len_s1 + len_s2 + 1);
	if (!s)
		return (0);
	ft_strlcpy(s, s1, len_s1 + 1);
	ft_strlcpy(s + len_s1, s2, len_s2 + 1);
	return (s);
}

char	*ft_strchr(const char *str, int c)
{
	char	a;

	a = c;
	while (*str && *str != a)
		str++;
	if (*str == a)
		return ((char *)str);
	return (0);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	len_s;

	if (!s)
		return (0);
	len_s = ft_strlen(s);
	if (start > len_s)
	{
		new = (char *)malloc(sizeof(char) * 1);
		new[0] = '\0';
		return (new);
	}
	len = len + 1;
	if ((start + len) < len_s)
		new = (char *)malloc(sizeof(char) * len);
	else
		new = (char *)malloc(sizeof(char) * (len_s - start + 1));
	if (!(new))
		return (0);
	ft_strlcpy(new, s + start, len);
	return (new);
}

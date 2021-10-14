/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urycherd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 17:09:28 by urycherd          #+#    #+#             */
/*   Updated: 2021/10/06 17:09:31 by urycherd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <assert.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	a;

	len = ft_strlen(dst);
	a = 0;	
	if (dstsize <= len) {
		return (dstsize + ft_strlen(src));
	}
	while (len + a + 1 < dstsize && src[a])
	{
		dst[len + a] = src[a];
		a++;
	}
	dst[len + a] = '\0';
	return (len + ft_strlen(src));
}

int main(void)
{

	char dest[30]; memset(dest, 0, 30);
	char * src = (char *)"AAAAAAAAA";
	dest[0] = 'B';
	/* 1 */ assert(ft_strlcat(dest, src, 0) == strlen(src) && !strcmp(dest, "B"));
	dest[0] = 'B';
	/* 2 */ assert(ft_strlcat(dest, src, 1) == 10 && !strcmp(dest, "B"));
	memset(dest, 'B', 4);
	/* 3 */ assert(ft_strlcat(dest, src, 3) == 3 + strlen(src) && !strcmp(dest, "BBBB"));
	/* 4 */ assert(ft_strlcat(dest, src, 6) == 13 && !strcmp(dest, "BBBBA"));
	memset(dest, 'C', 5);
	/* 5 */ assert(ft_strlcat(dest, src, -1) == 14 && !strcmp(dest, "CCCCCAAAAAAAAA"));
	memset(dest, 'C', 15);
	/* 6 */ assert(ft_strlcat(dest, src, 17) == 24 && !strcmp(dest, "CCCCCCCCCCCCCCCA"));
	memset(dest, 0, 30);
	/* 7 */ assert(ft_strlcat(dest, src, 1) == strlen(src) && !strcmp(dest, ""));
	memset(dest, 0, 30); memset(dest, '1', 10);
	/* 8 */ assert(ft_strlcat(dest, src, 5) == strlen(src) + 5 && !strcmp(dest, "1111111111"));
	memset(dest, 0, 30); memset(dest, '1', 10);
	/* 9 */ assert(ft_strlcat(dest, src, 5) == strlen(src) + 5 && !strcmp(dest, "1111111111"));
	memset(dest, 0, 30); memset(dest, '1', 10);
	/* 10 */ assert(ft_strlcat(dest, "", 15) == 10 && !strcmp(dest, "1111111111"));
	memset(dest, 0, 30);
	/* 11 */ assert(ft_strlcat(dest, "", 42) == 0 && !strcmp(dest, ""));
	memset(dest, 0, 30);
	/* 12 */ assert(ft_strlcat(dest, "", 0) == 0 && !strcmp(dest, ""));
	memset(dest, 0, 30);
	/* 13 */ assert(ft_strlcat(dest, "123", 1) == 3 && !strcmp(dest, ""));
	memset(dest, 0, 30);
	/* 14 */ assert(ft_strlcat(dest, "123", 2) == 3 && !strcmp(dest, "1"));
	memset(dest, 0, 30);
	/* 15 */ assert(ft_strlcat(dest, "123", 3) == 3 && !strcmp(dest, "12"));
	memset(dest, 0, 30);
	/* 16 */ assert(ft_strlcat(dest, "123", 4) == 3 && !strcmp(dest, "123"));
	memset(dest, 0, 30);
	/* 17 */ assert(ft_strlcat(dest, "123", 0) == 3 && !strcmp(dest, ""));

	return (0);
}
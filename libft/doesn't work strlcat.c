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
#include <stdio.h>

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	len;
	size_t	len2;
	size_t	a;

	len = ft_strlen(dst);
	len2 = len;
	a = 0;
	if (dstsize <= len)
		return (dstsize + len);
	while (len + 1 < dstsize)
	{
		dst[len] = src[a];
		a++;
		len++;
	}
	dst[len] = '\0';
	return (len2 + ft_strlen(src));
}

int	main(void)
{
	char dst[9] = "dst";
	char src[6] = "src";
	int	f;

	printf("%s\n", dst);
	f = ft_strlcat(dst, src, 4);
	printf("%s\n", dst);
	// i = strlcat(dst1, src1, 9);
	printf("%d;\n", f);
	return (0);
}

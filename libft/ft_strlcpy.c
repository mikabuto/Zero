/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urycherd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 13:47:07 by urycherd          #+#    #+#             */
/*   Updated: 2021/10/06 13:47:09 by urycherd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
// #include "libft.h"
int	ft_strlen(const char *s);

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
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

int	main(void)
{
	char len[10];
	char lenta[5];

	len[0] = 'a';
	lenta[0] = 'z';
	len[1] = 'b';
	lenta[1] = 'x';
	len[2] = 'c';
	lenta[2] = 'v';
	len[3] = 'd';
	lenta[3] = 'n';
	len[4] = 'e';
	lenta[4] = '\0';
	len[5] = 'f';
	len[6] = '1';
	len[7] = '2';
	len[8] = '3';
	len[9] = '\0';
	ft_strlcpy(lenta, len, 4);
	printf("%s = ", lenta);
	strlcpy(lenta, len, 4);
	printf("%s;\n", lenta);
	return (0);
}

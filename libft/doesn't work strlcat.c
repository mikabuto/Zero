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
// #include <stdio.h>

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i, a;

	i = ft_strlen(dst) - 1;
	a = 0;
	if (dstsize == 0)
		return (ft_strlen(dst));
	while (i < dstsize - 1)
	{
		dst[i + 1] = src[a];
		a++;
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst));
}

int	main(void)
{
	char dst[9] = "01234\0";
	char src[6] = "56\0789";
	char dst1[9] = "01234\0";
	char src1[6] = "56\0789";
	int	i, f;

	f = ft_strlcat(dst, src, 9);
	// printf("%s = ", dst);
	// i = strlcat(dst1, src1, 9);
	// printf("%s;\n", dst1);
	// printf("%d;\n", f);
	// printf("%d;\n", i);
	return (0);
}

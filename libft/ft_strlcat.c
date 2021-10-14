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

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	len;
	size_t	len2;
	size_t	a;

	len = ft_strlen(dst);
	len2 = len;
	a = 0;
	if (dstsize <= len)
		return (dstsize + ft_strlen(src));
	while (len + 1 < dstsize)
	{
		dst[len] = src[a];
		a++;
		len++;
	}
	dst[len] = '\0';
	return (len2 + ft_strlen(src));
}


// int	main(void)
// {
// 	char dst[9] = "01234\0";
// 	char src[6] = "56\0789";
// 	char dst1[9] = "01234\0";
// 	char src1[6] = "56\0789";
// 	int	i, f;

// 	f = ft_strlcat(dst, src, 9);
// 	printf("%s = ", dst);
// 	i = strlcat(dst1, src1, 9);
// 	printf("%s;\n", dst1);
// 	printf("%d;\n", f);
// 	printf("%d;\n", i);
// 	return (0);
// }

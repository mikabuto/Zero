/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urycherd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 09:22:33 by urycherd          #+#    #+#             */
/*   Updated: 2021/10/06 09:22:36 by urycherd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dest;
	const char	*sorc;

	dest = dst;
	sorc = src;
	while (n > 0)
	{
		*dest++ = *sorc++;
		n--;
	}
	return (dst);
}

int	main(void)
{
	char len[10];
	char lenta[10];

	len[0] = 'a';
	len[1] = 'b';
	len[2] = 'c';
	len[3] = 'd';
	len[4] = 'e';
	len[5] = 'f';
	len[6] = '1';
	len[7] = '2';
	len[8] = '3';
	len[9] = '\0';
	ft_memcpy(lenta, len, 3);
	printf("%s = ", lenta);
	memcpy(lenta, len, 3);
	printf("%s;\n", lenta);
	return (0);
}

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
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	int				i;
	char			*restrict dest;
	const char		*restrict sorc;

	i = 0;
	dest = dst;
	sorc = src;
	while (n > 0)
	{
		dest[i] = sorc[i];
		i++;
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
	len[6] = '\0';
	ft_memcpy(lenta, len, 5);
	printf("%s", lenta);
	return (0);
}

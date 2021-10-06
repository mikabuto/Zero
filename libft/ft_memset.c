/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urycherd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 09:23:01 by urycherd          #+#    #+#             */
/*   Updated: 2021/10/06 09:23:03 by urycherd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>
void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	unsigned char	*k;

	i = 0;
	k = b;
	while (len > 0)
	{
		k[i] = c;
		i++;
		len--;
	}
	// k[i] = '\0';
	return (b);
}

int	main(void)
{
	char len[10];

	len[0] = 'a';
	len[1] = 'b';
	len[2] = 'c';
	len[3] = 'd';
	len[4] = 'e';
	len[5] = 'f';
	len[6] = '\0';
	ft_memset(len, '1', 10);
	printf("%s", len);
	return (0);
}

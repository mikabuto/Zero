/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urycherd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 17:47:36 by urycherd          #+#    #+#             */
/*   Updated: 2021/10/07 17:47:39 by urycherd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;
	char		a;

	a = c;
	str = s;
	while (n-- > 0)

	{
		if (*str == a)
			return ((char *)str);
		str++;
	}
	return (0);
}

int main ()
{
	char s[] = {0, 1, 2 ,3 ,4 ,5};

	printf("%lld", (char *)ft_memchr(s, 2 + 256, 3) - s);
}
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

#include <string.h>
#include <stdio.h>
void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;

	str = s;
	while (n-- > 0)
	{
		if (*str == c)
			return ((char *)str);
		str++;
	}
	return (0);
}

int main()
{
	char	*str = "wow that's cool";
	int c = 1;

	printf("%s - orign\n", memchr(str, 'w', c));
	printf("%s - my work ", ft_memchr(str, 'w', c));
	return (0);
}

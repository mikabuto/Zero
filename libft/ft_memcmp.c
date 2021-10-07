/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urycherd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:11:28 by urycherd          #+#    #+#             */
/*   Updated: 2021/10/07 18:11:32 by urycherd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include  <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*s01;
	const char	*s02;

	s01 = s1;
	s02 = s2;
	i = 0;
	while (*s01 == *s02 && s01 && s02 && i < n - 1)
	{
		s01++;
		s02++;
		i++;
	}
	return (*s01 - *s02);
}

int main ()
{
	char *a = "1235";
	char *b = "1234";

	printf("%d : ", memcmp(a, b, 4));
	printf("%d ", ft_memcmp(a, b, 4));
	return (0);
}
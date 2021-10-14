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

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*s01;
	char	*s02;

	if (!(n))
		return (0);
	s01 = (char *)s1;
	s02 = (char *)s2;
	i = 0;
	while (s01[i] == s02[i] && i < n - 1)
		i++;
	return (s01[i] - s02[i]);
}

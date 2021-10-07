/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urycherd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:26:45 by urycherd          #+#    #+#             */
/*   Updated: 2021/10/07 15:26:47 by urycherd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*a;

	a = s;
	while (*s)
		s++;
	while (s >= a)
	{
		if (*s == c)
			return ((char *)s);
		s--;
	}
	return (0);
}

int main()
{
	char *str = "qwertyutiop[]\0";
	int c = 'r';

	printf("%s,\n",ft_strrchr(str, c));
	printf("%s,\n",strrchr(str, c));
	printf("%s,\n",str);
	return (0);
}

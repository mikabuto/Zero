/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urycherd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:24:05 by urycherd          #+#    #+#             */
/*   Updated: 2021/10/07 15:24:07 by urycherd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *str, int c)
{
	while (*str != c && *str != '\0')
		str++;
	if (*str == c)
		return ((char *)str);
	return (0);
}

int main()
{
	char *str1 = "QWERTYUIOP[]\0";
	int c1 = 'T';
	// char *str = "qwertyuiop[]\0";
	// int c = 't';

	printf("%s \n",ft_strchr(str1, c1));
	// printf("%s",strchr(str, c));
	printf(", %s",str1);
	return (0);
}

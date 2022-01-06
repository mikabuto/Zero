/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   supfunct.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urycherd <urycherd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 18:36:37 by urycherd          #+#    #+#             */
/*   Updated: 2022/01/06 18:52:30 by urycherd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static int	ft_int_size(int n)
{
	int	size;

	size = 0;
	if (n <= 0)
		size = 1;
	while (n)
	{
		n /= 10;
		size++;
	}
	return (size);
}

static int	ft_pow(int a)
{
	int	i;

	i = 1;
	while (a--)
		i *= 10;
	return (i);
}

char	*ft_itoa(int n)
{
	char	*newnum;
	int		size;
	int		i;

	i = 0;
	size = ft_int_size(n);
	newnum = (char *)malloc(sizeof(char) * size + 1);
	if (!newnum)
		return (0);
	if (n < 0)
	{
		newnum[i] = '-';
		i++;
	}
	while (i < size)
	{
		if (n < 0)
			newnum[i] = -(n / ft_pow(size - i - 1) % 10) + '0';
		else
			newnum[i] = (n / ft_pow(size - i - 1) % 10) + '0';
		i++;
	}
	newnum[i] = '\0';
	return (newnum);
}

char	*dec_to_hex_inv(unsigned int num)
{
	char	*hex;
	int		rem;
	int		i;

	hex = (char *)malloc(19 * sizeof(hex));
	if (hex == 0)
		return (NULL);
	i = 0;
	while (num > 0)
	{
		rem = num % 16;
		if (rem < 10)
			hex[i] = 48 + rem;
		else
			hex[i] = 55 + rem;
		i++;
		num /= 16;
	}
	hex[i] = '\0';
	return (hex);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags_p1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urycherd <urycherd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 18:30:33 by urycherd          #+#    #+#             */
/*   Updated: 2022/01/06 19:15:31 by urycherd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_for_c(va_list ap)
{
	char	c;

	c = va_arg(ap, int);
	write(1, &c, 1);
	return (1);
}

int	ft_for_s(va_list ap)
{
	char	*str;

	str = va_arg(ap, char *);
	while (*str)
		write(1, str++, 1);
	return (strlen(str));
}

int	ft_for_p(va_list ap)
{
	unsigned long long	*adress_dec;
	char				*adress;
	int					num;
	int					i;

	adress_dec = va_arg(ap, unsigned long);
	adress = dec_to_hex_inv(adress_dec);
	if (adress == NULL)
		return (0);
	i = strlen(adress);
	num = strlen(adress);
	write(1, "0", 1);
	write(1, "x", 1);
	while (i > 0)
		write(1, adress[i--], 1);
	free(adress);
	return (num);
}

int	ft_for_d(va_list ap)
{
	int		num;
	char	*str;

	num = va_arg(ap, int);
	str = ft_itoa(num);
	if (str == NULL)
		return (0);
	while (*str)
		write(1, str++, 1);
	num = strlen(str);
	free(str);
	return (num);
}

int	ft_for_u(va_list ap)
{
	return (0);
}

int	ft_for_hex(va_list ap, char c)
{
	int		num;
	int		i;
	char	*hex;

	num = va_arg(ap, unsigned int);
	hex = dec_to_hex_inv(num);
	if (hex == NULL)
		return (0);
	num = strlen(hex);
	i = num;
	while (i > 0)
	{
		if (c < 96 && hex > 64 && hex < 91)
			hex += 32;
		write(1, hex[i], 1);
		i--;
	}
	free (hex);
	return (num);
}

int	ft_for_proc()
{
	write (1, "%", 1);
	return (strlen("%"));
}

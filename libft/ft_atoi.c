/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urycherd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 12:40:12 by urycherd          #+#    #+#             */
/*   Updated: 2021/10/12 12:40:16 by urycherd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	summ;

	summ = 0;
	i = 0;
	sign = 1;
	if (str[0] == '-')
	{
		sign = -sign;
		i++;
	}
	if (str[0] == '+')
		i++;
	while (ft_isdigit(str[i]) == 1)
	{
		summ = summ * 10 + (str[i] - '0');
		i++;
	}
	return (summ * sign);
}

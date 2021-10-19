/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urycherd <urycherd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:24:05 by urycherd          #+#    #+#             */
/*   Updated: 2021/10/18 13:02:33 by urycherd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	char	a;

	a = c;
	while (*str != a && *str != '\0')
		str++;
	if (*str == a)
		return ((char *)str);
	return (0);
}

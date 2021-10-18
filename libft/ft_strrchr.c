/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urycherd <urycherd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:26:45 by urycherd          #+#    #+#             */
/*   Updated: 2021/10/18 13:14:40 by urycherd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	const char	*a;
	char		b;

	b = c;
	a = s;
	while (*s)
		s++;
	while (s >= a)
	{
		if (*s == b)
			return ((char *)s);
		s--;
	}
	return (0);
}

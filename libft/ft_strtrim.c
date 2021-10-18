/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urycherd <urycherd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:30:47 by urycherd          #+#    #+#             */
/*   Updated: 2021/10/18 15:55:01 by urycherd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s;
	size_t	len;

	if (!s1)
		return (0);
	s = 0;
	len = ft_strlen(s1);
	if (!(s1) || !(set))
		return (0);
	while (ft_strchr(set, s1[s]))
		s++;
	while (ft_strchr(set, s1[len]))
		len--;
	return (ft_substr(s1, s, len - s + 1));
}

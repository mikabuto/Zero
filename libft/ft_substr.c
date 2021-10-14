/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urycherd <urycherd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 14:43:09 by urycherd          #+#    #+#             */
/*   Updated: 2021/10/14 16:03:14 by urycherd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;

	if (!(s) || (size_t)start >= ft_strlen(s))
		return (0);
	len = len + 1;
	new = (char *)malloc(len);
	if (!(new))
		return (0);
	ft_strlcpy(new, s + start, len);
	return (new);
}

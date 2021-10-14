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
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;

	if (!(s))
		return (0);
	len++;
	new = (char *)malloc(sizeof(char) * len);
	if (!(new))
		return (0);
	new[0] = '\0';
	if (start >= ft_strlen(s))
		return (new);
	ft_strlcpy(new, s + start, len);
	return (new);
}

int main()
{
	char *s = "01234567";
	char * kek = ft_substr(s, 7, 1);

	printf("%s", kek);

	free(kek);

	return (0);
}
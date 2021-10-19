/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urycherd <urycherd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:52:01 by urycherd          #+#    #+#             */
/*   Updated: 2021/10/19 00:04:15 by urycherd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	words_counter(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		while (*s && *s != c)
			s++;
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	char	*lol;
	int		start;
	int		end;
	int		i;

	if (!s || !c)
		return (0);
	start = 0;
	end = 0;
	i = 0;
	lol = ft_strtrim(s, &c);
	printf("%s", lol);
	// strs = (char **)malloc(sizeof(char *) * (words_counter(lol, c) + 1));
	// if (!strs)
	// 	return (0);
	// while (lol[end])
	// {
	// 	while (lol[end] && lol[end] != c)
	// 		end++;
	// 	strs[i] = ft_substr(lol, start, end - start);
	// 	while (lol[end] && lol[end] == c)
	// 		end++;
	// 	start = end;
	// 	i++;
	// }
	// strs[i] = NULL;
	free (lol);
	return (strs);
}

int main ()
{
	char * * tab = ft_split("tripouille", 1);
	// char *lol;
	// char	c = 0;

	printf("%s", tab[0]);
	free(tab);
	// lol = ft_strtrim("tripouille", &c);
	// printf("%s", lol);
	// free(lol);
	return (0);
}

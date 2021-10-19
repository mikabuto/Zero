/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urycherd <urycherd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:52:01 by urycherd          #+#    #+#             */
/*   Updated: 2021/10/19 16:09:36 by urycherd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

char	**make_strs(char **strs, char *lol, char c)
{
	int		start;
	int		end;
	int		i;

	start = 0;
	end = 0;
	i = 0;
	while (lol[end])
	{
		while (lol[end] && lol[end] != c)
			end++;
		strs[i] = ft_substr(lol, start, end - start);
		while (lol[end] && lol[end] == c)
			end++;
		start = end;
		i++;
	}
	strs[i] = NULL;
	free (lol);
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	char	*lol;

	if (!s)
		return (0);
	lol = ft_strtrim(s, &c);
	strs = (char **)malloc(sizeof(char *) * (words_counter(lol, c) + 1));
	if (!strs)
		return (0);
	strs = make_strs(strs, lol, c);
	return (strs);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urycherd <urycherd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:52:01 by urycherd          #+#    #+#             */
/*   Updated: 2021/11/08 19:30:05 by urycherd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_start(char const *s1, char *set)
{
	int		s;

	s = 0;
	while (s1[s] && s1[s] == *set)
		s++;
	s1 = s1 + s;
	return ((char *)s1);
}

int	words_counter(char *lol, char c)
{
	int	i;

	i = 0;
	while (*lol)
	{
		while (*lol && *lol == c)
			lol++;
		while (*lol && *lol != c)
			lol++;
		if (!(*lol) && *(lol - 1) != c)
			i++;
		else if (*lol)
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
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	char	*lol;

	if (!s)
		return (0);
	lol = ft_start(s, &c);
	strs = (char **)malloc(sizeof(char *) * (words_counter(lol, c) + 1));
	if (!strs)
		return (0);
	strs = make_strs(strs, lol, c);
	return (strs);
}

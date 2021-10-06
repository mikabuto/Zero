/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urycherd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 09:23:01 by urycherd          #+#    #+#             */
/*   Updated: 2021/10/06 09:23:03 by urycherd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	unsigned char	*k;

	i = 0;
	k = b;
	while (len > 0)
	{
		k[i] = c;
		i++;
		len--;
	}
	return (b);
}
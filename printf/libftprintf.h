/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urycherd <urycherd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 15:15:40 by urycherd          #+#    #+#             */
/*   Updated: 2022/01/06 19:01:31 by urycherd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

size_t	ft_strlen(const char *s);
int		ft_for_proc();
int		ft_for_c(va_list ap);
int		ft_for_s(va_list ap);
int		ft_for_p(va_list ap);
int		ft_for_d(va_list ap);
int		ft_for_i(va_list ap);
int		ft_for_u(va_list ap);
int		ft_for_hex(va_list ap, char c);
char	*dec_to_hex_inv(unsigned int num);
char	*ft_itoa(int n);

#endif
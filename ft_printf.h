/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 14:21:20 by cparodi           #+#    #+#             */
/*   Updated: 2024/05/10 14:28:28 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"

int		ft_printf(const char *, ...);
int		ft_parsing_format(const char format, va_list args);
int		ft_make_c(va_list args);
int		ft_make_s(va_list args);
int		ft_make_p(va_list args);
int		ft_make_d(va_list args);
int		ft_make_u(va_list args);
int		ft_make_x(va_list args);
int		ft_make_X(va_list args);
int		ft_make_percent(va_list args);

void	ft_putnbr_u_fd(unsigned int n, int fd);

#endif

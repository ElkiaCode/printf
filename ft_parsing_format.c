/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing_format.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 15:00:11 by cparodi           #+#    #+#             */
/*   Updated: 2024/05/10 14:28:03 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parsing_format(const char format, va_list args)
{
	if (format == 'c')
		return (ft_make_c(args));
	else if (format == 's')
		return (ft_make_s(args));
	// else if (format == 'p')
	// 	return (ft_make_p(args));
	else if (format == 'd' || format == 'i')
		return (ft_make_d(args));
	else if (format == '%')
		return (ft_make_percent(args));
	return (0);
}

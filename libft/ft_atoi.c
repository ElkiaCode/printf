/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 17:29:00 by cparodi           #+#    #+#             */
/*   Updated: 2024/05/03 16:06:31 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

static int	white_space(char *nptr, int i)
{
	if (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\n' || nptr[i] == '\r'
		|| nptr[i] == '\v' || nptr[i] == '\f')
	{
		return (1);
	}
	else
		return (0);
}

int	ft_atoi(char *nptr)
{
	int	i;
	int	nbsign;
	int	j;

	i = 0;
	nbsign = 1;
	j = 0;
	while (white_space(nptr, i))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			nbsign = -nbsign;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		j = (j * 10) + (nptr[i] - '0');
		i++;
	}
	return (nbsign * j);
}

// int	main(void)
// {
// 	char	str[] = "+1234ab567";

// 	ft_atoi(str);
// }

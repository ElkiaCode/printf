/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 13:57:26 by cparodi           #+#    #+#             */
/*   Updated: 2024/04/24 17:10:29 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	nb;

	i = 0;
	if (big == little || ft_strlen(little) == 0)
		return ((char *)big);
	while (big[i] && i < len)
	{
		nb = 0;
		while (big[i + nb] && little[nb] && big[i + nb] == little[nb] && i
			+ nb < len)
			nb++;
		if (nb == ft_strlen(little))
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}

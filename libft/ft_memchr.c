/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 12:51:02 by cparodi           #+#    #+#             */
/*   Updated: 2024/04/27 13:12:42 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*tmp;
	unsigned char	tmpc;

	i = 0;
	tmpc = (unsigned char)c;
	tmp = (unsigned char *)s;
	while (n > i)
	{
		if (tmp[i] == tmpc)
			return ((void *)tmp + i);
		i++;
	}
	return (NULL);
}

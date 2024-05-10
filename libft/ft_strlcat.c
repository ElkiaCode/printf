/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 16:41:55 by cparodi           #+#    #+#             */
/*   Updated: 2024/04/27 12:09:50 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = ft_strlen(dst);
	if (dstsize <= n)
		return (ft_strlen(src) + dstsize);
	while ((n + i) < (dstsize - 1) && src[i])
	{
		dst[n + i] = src[i];
		i++;
	}
	dst[n + i] = '\0';
	return (ft_strlen(src) + n);
}

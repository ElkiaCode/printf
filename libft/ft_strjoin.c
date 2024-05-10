/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:27:31 by cparodi           #+#    #+#             */
/*   Updated: 2024/04/29 12:58:38 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*end;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	end = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!end)
		return (NULL);
	while (s1[i])
	{
		end[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		end[i + j] = s2[j];
		j++;
	}
	end[i + j] = '\0';
	return (end);
}

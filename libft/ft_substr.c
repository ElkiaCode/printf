/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:01:17 by cparodi           #+#    #+#             */
/*   Updated: 2024/05/06 15:33:30 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	char	*str;

	j = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		len = 0;
	if (len < (ft_strlen(s) - start))
		str = malloc(sizeof(char) * (len + 1));
	else
		str = malloc(sizeof(char) * ((ft_strlen(s) - start) + 1));
	if (!str)
		return (NULL);
	while (s[start] && len)
	{
		str[j] = s[start];
		start++;
		j++;
		len--;
	}
	str[j] = 0;
	return (str);
}

// int	main(void)
// {
// 	char			*str;
// 	unsigned int	start;
// 	size_t			len;
// 	char			*sub;

// 	str = "trj";
// 	start = 12;
// 	len = 5;
// 	sub = ft_substr(str, start, len);
// 	printf("Substring: %s\n", sub);
// 	free(sub);
// 	return (0);
// }

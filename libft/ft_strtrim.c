/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:16:28 by cparodi           #+#    #+#             */
/*   Updated: 2024/05/06 15:18:51 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	if (!set)
		return (0);
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = ft_strlen(s1) - 1;
	if (!s1)
		return (NULL);
	while (ft_set(s1[i], set) == 1)
		i++;
	if (i == (j + 1))
	{
		str = malloc(1);
		str[0] = 0;
		return (str);
	}
	while (ft_set(s1[j], set) == 1)
		j--;
	str = (char *)malloc(sizeof(char) * (j - i) + 2);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1 + i, j - i + 2);
	return (str);
}

// int	main(void)
// {
// 	char	s1[] = "teebonjourte";

// 	printf("%s", ft_strtrim(s1, "te"));
// 	return (0);
// }

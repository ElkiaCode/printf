/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:06:37 by cparodi           #+#    #+#             */
/*   Updated: 2024/05/06 17:11:06 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_splitwords(char const *s, size_t x, size_t words)
{
	size_t	i;
	size_t	j;
	char	**str;

	i = 0;
	j = 0;
	str = ft_calloc((words + 1), (sizeof(char *)));
	if (s[i] != '\0')
		str[j++] = ft_strdup(&s[i]);
	while (i++ < x)
	{
		if (s[i] != '\0' && s[i - 1] == '\0')
			str[j++] = ft_strdup(&s[i]);
	}
	return (str);
}

static int	ft_countwords(char const *s, char c)
{
	size_t	i;
	size_t	result;

	i = 0;
	result = 0;
	while (s[i])
	{
		if (s[i] != c && ((s[i + 1] == c) || (s[i + 1] == '\0')))
			result++;
		i++;
	}
	return (result);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	words;
	size_t	x;
	char	*str;
	char	**endresult;

	if (!s)
		return (NULL);
	x = ft_strlen(s);
	i = 0;
	str = ft_strdup(s);
	if (!str)
		return (NULL);
	while (i < x)
	{
		if (str[i] == c)
			str[i] = '\0';
		i++;
	}
	words = ft_countwords(s, c);
	endresult = ft_splitwords(str, x, words);
	free(str);
	return (endresult);
}

// int	main(void)
// {
// 	char	**result;

// 	//	char const	*str;
// 	//	str = "chinimala";
// 	result = ft_split("chinimala", ' ');
// 	if (result == NULL)
// 		return (1);
// 	for (int i = 0; result[i] != NULL; i++)
// 	{
// 		printf("%s\n", result[i]);
// 	}
// 	for (int i = 0; result[i] != NULL; i++)
// 	{
// 		free(result[i]);
// 	}
// 	free(result);
// 	return (0);
// }

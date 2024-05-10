/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 15:38:43 by cparodi           #+#    #+#             */
/*   Updated: 2024/05/06 14:00:17 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_result(char *str, int n, int i)
{
	str[i] = 0;
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
		while (i-- > 1)
		{
			str[i] = (n % 10) + '0';
			n /= 10;
		}
	}
	else
	{
		while (i-- > 0)
		{
			str[i] = (n % 10) + '0';
			n /= 10;
		}
	}
	return (str);
}

static int	ft_digit(int tmp)
{
	size_t	i;

	i = 0;
	if (tmp < 0)
	{
		tmp *= -1;
		i++;
	}
	while (tmp > 9)
	{
		tmp /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		j;
	int		tmp;
	int		i;

	tmp = n;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	j = ft_digit(tmp);
	i = j + 1;
	str = malloc(sizeof(char) * (j + 2));
	if (!str)
		return (NULL);
	str = ft_result(str, n, i);
	return (str);
}

// #include <limits.h>

// int	main(void)
// {
// 	int	n;

// 	n = INT_MIN;
// 	printf("%s", ft_itoa(n));
// 	return (0);
// }

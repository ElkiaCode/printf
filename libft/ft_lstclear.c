/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 14:12:10 by cparodi           #+#    #+#             */
/*   Updated: 2024/05/03 14:24:28 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*x;
	t_list	*temp;

	x = *lst;
	if (!del || !lst)
		return ;
	while (x)
	{
		temp = x->next;
		ft_lstdelone(x, del);
		x = temp;
	}
	*lst = NULL;
}

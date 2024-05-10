/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:41:34 by cparodi           #+#    #+#             */
/*   Updated: 2024/05/02 18:10:14 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*x;
	t_list	*temp;

	if (*lst)
	{
		x = ft_lstlast(*lst);
		temp = x->next;
		x->next = new;
		new->next = temp;
	}
	else
		*lst = new;
}

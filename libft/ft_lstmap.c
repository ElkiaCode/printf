/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 14:31:20 by cparodi           #+#    #+#             */
/*   Updated: 2024/05/03 15:51:14 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*temp;

	if (!lst || !del)
		return (0);
	result = NULL;
	while (lst)
	{
		temp = ft_lstnew(f(lst->content));
		while (!temp)
		{
			temp = result->next;
			(*del)(result->content);
			free(result);
			result = temp;
		}
		ft_lstadd_back(&result, temp);
		lst = lst->next;
	}
	return (result);
}

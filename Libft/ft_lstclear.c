/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plertsir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 11:32:47 by plertsir          #+#    #+#             */
/*   Updated: 2023/03/08 11:32:50 by plertsir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*currentnode;
	t_list	*ptr_lst;

	if (lst == NULL || del == NULL)
		return ;
	else if (lst != NULL)
	{
		ptr_lst = *lst;
		while (ptr_lst)
		{
			currentnode = ptr_lst;
			ptr_lst = ptr_lst->next;
			del(currentnode->content);
			free(currentnode);
		}
	*lst = NULL;
	}
}

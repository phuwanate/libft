#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list		*currentnode;
	t_list		*new_list;

	if (lst == NULL || del == NULL)
		return (NULL);
	new_list = NULL;
	while (lst != NULL)
	{
		currentnode = ft_lstnew((*f)(lst->content));
		if (!currentnode)
		{
			ft_lstclear(&currentnode, del);
			return (NULL);
		}	
		ft_lstadd_back(&new_list, currentnode);
		lst = lst->next;
	}
	return (new_list);
}

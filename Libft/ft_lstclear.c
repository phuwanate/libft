#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*currentnode;
	t_list	*nextnode;

	if (lst == NULL || del == NULL)
		return ;
	else if (lst != NULL)
	{
		nextnode = *lst;
		while (nextnode)
		{
			currentnode = nextnode;
			nextnode = nextnode->next;
			del(currentnode->content);
			free(currentnode);
		}
	*lst = NULL;
	}
}

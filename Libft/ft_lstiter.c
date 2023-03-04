#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list		*currentnode;

	if (lst == NULL)
		return ;
	while (lst != NULL)
	{
		currentnode = lst;
		f(currentnode->content);
		lst = lst->next;
	}
}

#include "libft.h"

void	ft_struct_del(void *node, size_t node_size)
{
	if (!node)
		return ;
	free(node);
	(void)node_size;
}

void	ft_lstappend(t_list **lst, t_list *new)
{
	t_list	*list;

	if (lst == 0)
		return ;
	if (*lst)
	{
		list = *lst;
		while (list->next)
			list = list->next;
		list->next = new;
	}
	else
		*lst = new;
}
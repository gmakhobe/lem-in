void	ft_attach_list(t_list **current_list, t_list *new_list) //ft_lstappend
{
	t_list	*list;

	if (!current_list)
		return ;
	if (*current_list)
	{
		list = *current_list;
		while (list->next != NULL)
			list = list->next;
		list->next = new_list;
	}
	else
		*current_list = new_list;
}
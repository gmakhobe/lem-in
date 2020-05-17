//check the size of the link
int    ft_check_connector(t_list **input) //is_link
{
    size_t	connector_size;
	char	**link;

	link = ft_strsplit((char*)(input->content), '-');
	if (!input || !link)
		return (0);
	connector_size = get_table_size(link);
	ft_strdel_table(link);
	if (connector_size < 2) ? return (0) : return (1);
}




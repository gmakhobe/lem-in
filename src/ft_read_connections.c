int		ft_read_connections(t_list **input, t_farm *farm) //parse links
{
	while (*input != NULL)
	{
        if (!ft_check_connector(*input) || !ft_read_connection(*input, farm))
			return (0);
		if (ft_jump_comments(input) || ft_jump_commands(input))
			continue ;
		if (!(*input))
			return (1);
		*input = (*input)->next;
	}
	return (*input == NULL);
}
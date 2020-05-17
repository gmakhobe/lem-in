int		connections_to_the_rooms(t_list *input, t_farm *farm,
							t_room **from, t_room **to) //set_links_rooms function
{
	char	**connector;
    connector = ft_strsplit((char*)(input->content), '-');
    *from = ft_room_name(farm->rooms, connector[0]);
    *to = ft_room_name(farm->rooms, connector[1]);

	if (!connector)
		return (0);
	if (!(*from) || !(*to) || *from == *to)
	{
		ft_clear_data(connector);
		return (0);
	}
	ft_clear_data(connector);
	return (1);
}
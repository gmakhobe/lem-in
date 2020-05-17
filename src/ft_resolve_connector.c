static t_link	*ft_connector(t_room *from, t_room *to) //get link
{
	t_link	*connector;

	if (!(connector = (t_link*)malloc(sizeof(t_link))))
		return (NULL);
	connector->from = from;
	connector->to = to;
	return (connector);
}
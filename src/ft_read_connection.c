#include "lem_in.h"

int				ft_read_connection(t_list *input, t_farm *farm) //parse link
{
	t_list	*new_list;
	t_link	*connection;
	t_room	*from;
	t_room	*to;
    int     rooms_connector;

    rooms_connector = ft_connections_to_the_rooms(input, farm, &from, &to);
    connection = ft_resolve_connection(from, to);
    new_list = ft_lstcpy(connection, sizeof(t_link));
	if (!(rooms_connector) || !(connection))
		return (0);
	if (!(new_list))
	{
		free(connection);
		return (0);
	}
	ft_lstappend(&(farm->links), new_list);
	return (1);
}
#include "../includes/lem_in.h"

int				a_dijkstra(t_farm *farm)
{
	t_room	*cnode;
	t_list	*list;

	farm->start->dist = 0;
	list = get_room_list(farm);
    if (!list)
		return (0);
	while (list)
	{
		cnode = get_closest_node(list);
		ft_lstremove(&list, cnode, NULL);
		mod_nodes_dist(farm, cnode);
	}
    if (farm->end->dist != INT_MAX - 1)
        return (1);
    else
        return (0)
}
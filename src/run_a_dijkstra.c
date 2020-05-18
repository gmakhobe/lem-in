#include "lem_in.h"

t_list			*run_a_dijkstra(t_farm *farm)
{
	t_list	*path;
	t_list	*list;
    t_room	*node;
    size_t  limit;

    limit = 2;
	path = NULL;
    if (a_dijkstra(farm) == 0)
		return (NULL);
	node = farm->end;
	while (node != NULL)
	{
		if (!(list = ft_lstcpy(node, sizeof(t_room))))
		{
			ft_lstdel(&path, NULL);
			return (NULL);
		}
		ft_lstadd(&path, list);
		node = room->prev;
	}
	if (ft_lstsize(path) < limit)
		ft_lstdel(&path, NULL);
	return (path);
}
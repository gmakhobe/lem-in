#include "../includes/lem_in.h"

void		mod_nodes_dist(t_farm *farm, t_room *room)
{
	t_list	*links;
	t_link	*link;
	t_room	*to_room;

	links = farm->links;
	while (links)
	{
		link = (t_link*)(links->content);
		if (link->to == room)
			to_room = link->from;
		else if (link->from == room)
			to_room = link->to;
		else
			to_room = NULL;
		if (to_room && to_room != farm->start && to_room->dist > room->dist + 1)
		{
			to_room->dist = room->dist + 1;
			to_room->prev = room;
		}
		links = links->next;
	}
}

t_room	*get_closest_node(t_list *rooms)
{
    int     min_dist;
	t_room	*node;

	node = (t_room*)(rooms->content);
	rooms = rooms->next;
    min_dist = node->dist;
	while (rooms)
	{
		if (min_dist > ((t_room*)(rooms->content))->dist)
		{
			node = (t_room*)(rooms->content);
			min_dist = node->dist;
		}
		rooms = rooms->next;
	}
	return (node);
}

t_list	*get_room_list(t_farm *farm)
{
	t_list	*room_list;
	t_list	*temp;
	t_list	*list;

	room_list = NULL;
	list = farm->rooms;
	while (list)
	{
		if (!(temp = ft_lstcpy(list->content, sizeof(t_room))))
		{
			ft_lstdel(&room_list, NULL);
			return (NULL);
		}
		ft_lstappend(&room_list, temp);
		list = list->next;
	}
	return (room_list);
}
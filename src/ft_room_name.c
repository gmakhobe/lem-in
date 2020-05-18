#include "../includes/lem_in.h"

// it gets the name of the room/rooms
t_room		*ft_room_name(t_list *rooms, char *name) // get_room_by_name
{
	t_room	*room;

	while (rooms != NULL)
	{
		room = (t_room*)(rooms->content);
		if (!ft_strcmp(room->name, name))
			return (room);
		rooms = rooms->next;
	}
	return (NULL);
}

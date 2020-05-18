#include "../includes/lem_in.h"

int		locate(t_ant *ant, t_farm *farm, t_list *path)
{
	t_room	*current_node;
	t_room	*next_node;

	if (!(ant->room))
		ant->room = farm->start;
	while (path->next != NULL)
	{
		current_node = (t_room*)(path->content);
		next_node = (t_room*)(path->next->content);
		if (ant->room == current_node &&
			(next_node->available || next_node == farm->end))
		{
			ant->room->available = 1;
			ant->room = next_node;
			ant->room->available = 0;
			return (1);
		}
		path = path->next;
	}
	return (0);
}
#include "lem_in.h"

int analyze_map_data(t_list **input, t_farm *map)
{
	t_list *data;

	map->ants = NULL;
	map->start = NULL;
	map->end = NULL;
	map->rooms = NULL;
	map->turns = NULL;
	map->links = NULL;

	if (!handle_line_data(input))
		return (0);
	data = *input;
	if (!handle_ant_data(&data, map))
		return (0);
	// if (!parse_rooms(&data, map))
	// 	return (0);
	// if (!parse_links(&data, map))
	// 	return (0);
	// return (1);

	///slimys code 
}

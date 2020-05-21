/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   analyze_map_data.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmakhobe <gmakhobe@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 21:31:24 by gmakhobe          #+#    #+#             */
/*   Updated: 2020/05/21 11:21:25 by gmakhobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

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
	if (!map || !data)
		return 0;
	if (!handle_ant_data(&data, map))
		return (0);
	if (!resolve_rooms(&data, map))
	 	return (0);
	if (!ft_read_connections(&data, map))
	 	return (0);
	return (1);
}

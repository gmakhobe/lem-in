/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_room_name.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmakhobe <gmakhobe@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 21:35:14 by gmakhobe          #+#    #+#             */
/*   Updated: 2020/05/18 21:35:16 by gmakhobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

t_room		*ft_room_name(t_list *rooms, char *name)
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

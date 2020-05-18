/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_a_dijkstra.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmakhobe <gmakhobe@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 21:36:40 by gmakhobe          #+#    #+#             */
/*   Updated: 2020/05/18 21:36:42 by gmakhobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

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
		node = node->prev;
	}
	if (get_listsize(path) < limit)
		ft_lstdel(&path, NULL);
	return (path);
}
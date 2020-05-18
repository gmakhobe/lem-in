/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_path.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmakhobe <gmakhobe@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 21:36:49 by gmakhobe          #+#    #+#             */
/*   Updated: 2020/05/18 21:36:52 by gmakhobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

int				set_path(t_farm *farm, t_list *path,
					int *arrived)
{
    t_ant	*ant;
	t_list	*ant_list;
	t_list	*turn;

	ant_list = farm->ants;
	while (ant_list != NULL)
	{
		ant = (t_ant*)(ant_list->content);
		if (locate(ant, farm, path) == 1)
		{
            turn = find_turn(ant, ant->room);
			if (!turn)
				return (0);
			ft_lstappend(&(farm->turns), turn);
			if (ant->room == farm->end)
				(*arrived)++;
		}
		ant_list = ant_list->next;
	}
	((t_turn*)(turn->content))->last_move = 1;
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_turn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmakhobe <gmakhobe@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 21:31:53 by gmakhobe          #+#    #+#             */
/*   Updated: 2020/05/18 21:31:54 by gmakhobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

t_list	*find_turn(t_ant *ant, t_room *room)
{
	t_list	*turn_list;
	t_turn	*turn;

    turn = (t_turn*)malloc(sizeof(t_turn));
	if (!turn)
		return (NULL);
	turn->ant = ant;
	turn->room = room;
	turn->last_move = 0;
	turn_list = ft_lstcpy(turn, sizeof(t_turn));
    if (!turn_list)
		free(turn);
	return (turn_list);
}
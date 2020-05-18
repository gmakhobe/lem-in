/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_info.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmakhobe <gmakhobe@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 19:14:45 by samofoke          #+#    #+#             */
/*   Updated: 2020/05/18 21:32:49 by gmakhobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

static int	is_info_same(t_room *rm1, t_room *rm2)
{
	if (rm1 && rm1 != rm2 && 
            (!ft_strcmp(rm1->name, rm2->name) || 
             (rm1->x == rm2->x && rm1->y == rm2->y)))
        return (1);
    return (0);
}

int     find_info(t_farm *f, t_room *r)
{
    t_list *s;

    s = f->rooms;
    while (s)
    {
        if (is_info_same((t_room*)(s->content), r))
            return (1);
        s = s->next;
    }
    return (0);
}

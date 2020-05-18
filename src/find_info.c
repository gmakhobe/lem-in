/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_info.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 19:14:45 by samofoke          #+#    #+#             */
/*   Updated: 2020/05/17 20:44:37 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

//we check if the rooms don't contain the same information.
static int	is_info_same(t_room *rm1, t_room *rm2)
{
	if (rm1 && rm1 != rm2 && 
            (!ft_strcmp(rm1->name, rm2->name) || 
             (rm1->x == rm2->x && rm1->y == rm2->y)))
        return (1);
    return (0);
}

//we search for that if the same calling is_info_same
//that information exists.
int     find_info(t_farm *f, t_room *r)
{
    t_list *s;

    s = farm->s;
    while (s)
    {
        if (is_info_same((t_room*)(s->content), r))
            return (1);
        s = s->next;
    }
    return (0);
}

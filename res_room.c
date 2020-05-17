/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   res_room.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 23:10:24 by samofoke          #+#    #+#             */
/*   Updated: 2020/05/17 23:21:06 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

static int      add_rooms(t_room *r, t_farm *f)
{
    t_list *n;

    if (!(n = ft_lstcpy(r, sizeof(t_room))))
    {
        free_room(r, sizeof(t_room));
        return (0);
    }
    ft_lstappend(&(f->rooms), n);
    return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   res_room.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 23:10:24 by samofoke          #+#    #+#             */
/*   Updated: 2020/05/18 13:22:28 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

static int      add_rooms(t_room *r, t_farm *f)
{
    t_list *n;

    if (!(n = ft_lstcpy(r, sizeof(t_room))))
    {
        ft_free(r, sizeof(t_room));
        return (0);
    }
    ft_lstappend(&(f->rooms), n);
    return (1);
}

int			resolve_room(t_list **data, t_farm *f)
{
    int cmd;
    t_room  *r;

    if ((cmd = get_cmd(*data)) != -1 && 
            ((cmd == START_COMMAND && !(f->start)) || 
             (cmd == END_COMMAND && !(f->end))))
        *data = (*data)->next;
    if (is_link(*data))
        return (1);
	if (!(*data) || !(r = resolve_info((char*)((*data)->content)))
		|| !add_rooms(r, f) ||
		(cmd == START_COMMAND && f->start) ||
		(cmd == END_COMMAND && f->end))
		return (0);
	if (cmd == START_COMMAND && !(f->start))
		f->start = r;
	else if (cmd == END_COMMAND && !(f->end))
		f->end = r;
	if (find_info(f, r))
		return (0);
	return (1);
}

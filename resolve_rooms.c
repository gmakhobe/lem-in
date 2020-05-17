/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve_rooms.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 23:07:19 by samofoke          #+#    #+#             */
/*   Updated: 2020/05/17 23:41:29 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

int		resolve_rooms(t_list **data, t_farm *f)
{
	while (*data)
	{
		if (cmnt(data) || cmd(data))
			continue ;
		if (!resolve_room(data, f))
			return (0);
		if (is_link(*data))
			break ;
		*data = (*data)->next;
	}
	if (f->start == NULL || f->end == NULL)
		return (0);
	return (*data != NULL);
}

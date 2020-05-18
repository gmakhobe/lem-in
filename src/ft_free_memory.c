/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_memory.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmakhobe <gmakhobe@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 21:33:16 by gmakhobe          #+#    #+#             */
/*   Updated: 2020/05/18 21:37:33 by gmakhobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

void        ft_free(void *el, size_t el_size)
{
    if (!el)
		return ;
	free(el);
	(void)el_size;
}

void        ft_free_room(void *content, size_t content_size)
{
    t_room	*room;

	if (!content)
		return ;
	room = (t_room*)content;
	if (room->name)
		ft_free(room->name, content_size);
	free(content);
}

void        ft_clear(t_list **list, void (*clr)(void *))
{
    if (*list == NULL)
        return ;
    (*clr)((*list)->content);
    ft_memdel((void**)list);
    return ;
}

void        ft_free_list(t_list **list, void (*clr)(void *, size_t))
{
    t_list  *ptr;

    if(*list == NULL)
        return ;
    while (*list != NULL)
    {
        ptr = (*list)->next;
        ft_lstdelone(list, clr);
        *list = ptr;
    }
    return ;
}

void        ft_free_farm(t_farm *data)
{
    ft_free_list(&(data->rooms), ft_free_room);
    ft_free_list(&(data->ants), ft_free);
    ft_free_list(&(data->links), ft_free);
    ft_free_list(&(data->turns), ft_free);
    return ;
}
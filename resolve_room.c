/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve_room.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 13:22:53 by samofoke          #+#    #+#             */
/*   Updated: 2020/05/18 13:33:37 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

static int	set_coordinates(char *str, t_room *room)
{
	size_t	size;
	size_t	i;

	i = 0;
	size = ft_strlen(str) - 1;
	while (size > 0 && !ft_isspace(str[size]))
	{
		size--;
		i++;
	}
	if (!ft_isspace(str[size]) || !size || !i)
		return (0);
	room->y = ft_atoi_n(str + size, i);
	i = 0;
	size--;
	while (size > 0 && !ft_isspace(str[size]))
	{
		size--;
		i++;
	}
	if (!ft_isspace(str[size]) || !size || !i)
		return (0);
	room->x = ft_atoi_n(str + size, i);
	return (1);
}

static int	set_name(char *str, t_room *r)
{
	size_t	size;
	size_t	spaces;

	size = ft_strlen(str) - 1;
	spaces = 0;
	while (size != 0)
	{
		if (ft_isspace(str[size]))
			spaces++;
		if (spaces == 2)
			break ;
		size--;
	}
	if (spaces != 2)
		return (0);
	if (!(r->name = ft_strnew(size)))
		return (0);
	ft_strncpy(r->name, str, size);
	return (1);
}

t_room		*resolve_info(char *str)
{
	t_room	*r;

	if (!(r = (t_room*)malloc(sizeof(t_room))))
		return (NULL);
	if (!set_coordinates(str, r) || !set_name(str, r) ||
		!ft_strlen(r->name) || r->name[0] == 'L' ||
		r->name[0] == '#')
	{
		free(r);
		return (NULL);
	}
	r->dist = INT_MAX - 1;
	r->available = 1;
	r->prev = NULL;
	return (room);
}

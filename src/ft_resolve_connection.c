/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve_connection.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmakhobe <gmakhobe@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 21:34:34 by gmakhobe          #+#    #+#             */
/*   Updated: 2020/05/18 21:34:35 by gmakhobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

t_link	*ft_resolve_connection(t_room *from, t_room *to) //get link
{
	t_link	*connector;

	if (!(connector = (t_link*)malloc(sizeof(t_link))))
		return (NULL);
	connector->from = from;
	connector->to = to;
	return (connector);
}
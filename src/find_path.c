/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_path.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmakhobe <gmakhobe@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 21:31:45 by gmakhobe          #+#    #+#             */
/*   Updated: 2020/05/23 00:10:41 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

int     find_path(t_farm *farm)
{
    t_list  *path;
    int     i;

    path = run_a_dijkstra(farm);
    if (!path)
		return (0);
	i = 0;
	while (i < farm->n_ants)
        if (!set_path(farm, path, &i))
			break ;
	ft_lstdel(&path, NULL);
    if (i == farm->n_ants)
	    return (1);
    else
        return (0);
}

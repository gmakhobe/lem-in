/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_connections.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmakhobe <gmakhobe@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 21:34:22 by gmakhobe          #+#    #+#             */
/*   Updated: 2020/05/18 21:34:25 by gmakhobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

int		ft_read_connections(t_list **input, t_farm *farm) //parse links
{
	while (*input != NULL)
	{
		if (ignore_comments(input) || ignore_commands(input))
			continue ;
		if (!(*input))
			return (1);
        if (!is_link(*input) || !ft_read_connection(*input, farm))
			return (0);
		*input = (*input)->next;
	}
	if (*input == NULL)
		return (1);
	return (0);
}
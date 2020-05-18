/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem-in.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmakhobe <gmakhobe@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 21:36:12 by gmakhobe          #+#    #+#             */
/*   Updated: 2020/05/18 21:36:13 by gmakhobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

int		main(void)
{
	t_list	*input;
	t_farm	farm;

	if (analyze_map_data(&input, &farm) && 
        find_path(&farm))
		ft_print_out(input, farm.turns);
	else
		ft_error();
	ft_free_list(&input, ft_free);
	ft_free_farm(&farm);
	return (0);
}
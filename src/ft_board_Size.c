/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_board_Size.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmakhobe <gmakhobe@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 21:31:58 by gmakhobe          #+#    #+#             */
/*   Updated: 2020/05/18 21:32:30 by gmakhobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

size_t		ft_board_size(char **board)
{
	size_t i;

	i = 0;
    if(!board)
        return 0;
    else
       while (board[i] != NULL)
			i++;
	return (i);
}
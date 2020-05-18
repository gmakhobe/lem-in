/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clear_data.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmakhobe <gmakhobe@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 21:32:18 by gmakhobe          #+#    #+#             */
/*   Updated: 2020/05/18 21:32:21 by gmakhobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

void    ft_clear_data(char **data)
{
	size_t	i;

	i = 0;
	while (data[i] != NULL)
    {
		free(data[i]);
        i++;
    }
	free(data);
    data = NULL;
}
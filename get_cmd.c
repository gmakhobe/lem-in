/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_cmd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 23:42:56 by samofoke          #+#    #+#             */
/*   Updated: 2020/05/18 00:01:28 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in"

int		get_command(t_list *data)
{
    char    *str;

	if (!data)
        return (-1);
	str = (char*)(data->content);
	if (!str || ft_strlen(str) <= 2)
		return (-1);
	if (str[0] != COMMENT_ID || str[1] != COMMENT_ID)
		return (-1);
	if (!ft_strcmp(str + 2, START_COMMAND_ID))
		return (START_COMMAND);
	if (!ft_strcmp(str + 2, END_COMMAND_ID))
		return (END_COMMAND);
	return (0);
}

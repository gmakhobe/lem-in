/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_cmnt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 12:42:23 by samofoke          #+#    #+#             */
/*   Updated: 2020/05/18 12:45:16 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

int		is_cmnt(t_list *data)
{
	char	*str;

	if (!data)
		return (0);
	str = (char*)(data->content);
	if (!str || ft_strlen(str) <= 1)
		return (0);
	if (str[0] != COMMENT_ID || str[1] == COMMENT_ID)
		return (0);
	return (1);
}

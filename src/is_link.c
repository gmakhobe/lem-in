/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_link.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 00:04:13 by samofoke          #+#    #+#             */
/*   Updated: 2020/05/18 00:06:08 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

int		is_link(t_list *data)
{
	size_t	size;
	char	**link;

	if (!input)
		return (0);
	if (!(link = ft_strsplit((char*)(data->content), '-')))
		return (0);
	size = get_table_size(link);
	ft_strdel_table(link);
	if (size < 2)
		return (0);
	return (1);
}

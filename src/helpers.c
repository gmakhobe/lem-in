/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmakhobe <gmakhobe@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 21:35:57 by gmakhobe          #+#    #+#             */
/*   Updated: 2020/05/18 21:35:58 by gmakhobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

void	ft_struct_del(void *node, size_t node_size)
{
	if (!node)
		return ;
	free(node);
	(void)node_size;
}

void	ft_lstappend(t_list **lst, t_list *new)
{
	t_list	*list;

	if (lst == 0)
		return ;
	if (*lst)
	{
		list = *lst;
		while (list->next)
			list = list->next;
		list->next = new;
	}
	else
		*lst = new;
}
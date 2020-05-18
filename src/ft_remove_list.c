/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remove_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmakhobe <gmakhobe@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 21:34:29 by gmakhobe          #+#    #+#             */
/*   Updated: 2020/05/18 21:34:30 by gmakhobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

void	ft_remove_list(t_list **alst, void *content, int (*cmp)())
{
	t_list *last;
	t_list *curr;
	t_list *prev;

	last = NULL;
	prev = NULL;
	curr = *alst;
	while (curr)
	{
		if ((cmp && (*cmp)(curr->content, content) == 0) ||
			(curr->content == content))
		{
			if (*alst != curr)
				last->next = curr->next;
			else
				*alst = curr->next;
			prev = curr;
			curr = curr->next;
			free(prev);
			break ;
		}
		last = curr;
		curr = curr->next;
	}
}
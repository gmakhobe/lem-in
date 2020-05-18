/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmakhobe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 15:51:26 by gmakhobe          #+#    #+#             */
/*   Updated: 2019/09/02 10:24:57 by gmakhobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*lst;

	if (!(lst = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL || !content)
	{
		lst->content = NULL;
		lst->content_size = 0;
	}
	else
	{
		if (!(lst->content = malloc(content_size)))
			return (NULL);
		ft_memcpy(lst->content, content, content_size);
		lst->content_size = content_size;
	}
	lst->next = NULL;
	return (lst);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_out_ln.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmakhobe <gmakhobe@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 21:34:04 by gmakhobe          #+#    #+#             */
/*   Updated: 2020/05/18 21:34:06 by gmakhobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

void        ft_print_list(t_list *list, void (*fn)(t_list *))
{
    if (list == NULL)
        return ;
    (*fn)(list);
    while (list->next != NULL)
    {
        list = list->next;
        (*fn)(list);
    }
    return ;
}
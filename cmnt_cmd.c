/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmnt_cmd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 20:52:19 by samofoke          #+#    #+#             */
/*   Updated: 2020/05/17 22:54:33 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

int     cmd(t_list **data)
{
    int res;

    if ((res = get_cmd(*data)) != -1 && 
            res != START_COMMAND && res != END_COMMAND)
    {
        *data = (*data)->next;
        return (1);
    }
    return (0);
}

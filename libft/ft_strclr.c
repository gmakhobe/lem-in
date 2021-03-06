/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmakhobe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 21:26:12 by gmakhobe          #+#    #+#             */
/*   Updated: 2019/06/14 22:04:05 by gmakhobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	int	i;

	i = 0;
	if (s)
	{
		if (s != NULL)
		{
			while (s[i])
			{
				s[i] = '\0';
				i++;
			}
		}
	}
}

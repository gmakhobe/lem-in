/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmakhobe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/16 11:26:47 by gmakhobe          #+#    #+#             */
/*   Updated: 2019/06/30 16:43:37 by gmakhobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while ((s1[i] != 0) && (s2[i] != 0) && (s1[i] == s2[i]))
	{
		i++;
	}
	if ((((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]) > 0)
	{
		return (1);
	}
	else if ((((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]) < 0)
	{
		return (-1);
	}
	else
	{
		return (((unsigned char*)s1)[i] - ((unsigned char*)s2)[i]);
	}
}

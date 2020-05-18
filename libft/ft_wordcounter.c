/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcounter.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmakhobe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 13:43:46 by gmakhobe          #+#    #+#             */
/*   Updated: 2019/06/29 13:16:13 by gmakhobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordcounter(char const *str, int c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] == c)
		{
			i++;
		}
		if (str[i] != c && str[i] != '\0')
		{
			j++;
		}
		while (str[i] != c && str[i] != '\0')
		{
			i++;
		}
	}
	return (j);
}

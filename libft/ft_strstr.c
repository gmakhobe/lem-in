/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmakhobe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 16:33:54 by gmakhobe          #+#    #+#             */
/*   Updated: 2019/08/31 16:42:58 by gmakhobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *small)
{
	int		i;
	int		j;
	int		x;
	int		y;

	if (!ft_strlen(small))
		return ((char *)big);
	i = -1;
	y = 0;
	while (big[++i] && !y)
	{
		if (big[i] == small[0])
		{
			j = 0;
			x = i;
			y = 1;
			while (small[j])
				if (small[j++] != big[x++])
					y = 0;
			if (y)
				return ((char *)big + i);
		}
	}
	return (NULL);
}

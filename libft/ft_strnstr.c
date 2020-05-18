/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmakhobe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 16:41:53 by gmakhobe          #+#    #+#             */
/*   Updated: 2019/08/31 16:59:32 by gmakhobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	x;
	int		y;

	i = -1;
	y = 1;
	if (!ft_strlen(small))
		return ((char *)big);
	while (big[++i] && i < len)
	{
		j = 0;
		if (big[i] == small[0])
		{
			x = i;
			y = 1;
			while (big[x] && small[j] && j < len && x < len)
				if (big[x++] != small[j++])
					y = 0;
			if (y && !small[j])
				return ((char *)big + i);
		}
	}
	return (NULL);
}

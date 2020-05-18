/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmakhobe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 12:02:45 by gmakhobe          #+#    #+#             */
/*   Updated: 2019/06/17 09:55:00 by gmakhobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*sc;

	i = 0;
	sc = (const char *)s;
	while (i < n)
	{
		if (sc[i] == (char)c)
		{
			return ((void *)sc + i);
		}
		i++;
	}
	return (NULL);
}

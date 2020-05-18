/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmakhobe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 17:55:15 by gmakhobe          #+#    #+#             */
/*   Updated: 2019/06/12 14:33:30 by gmakhobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char		*dst;
	const char	*src;
	int			i;

	src = (const char *)s;
	i = 0;
	dst = ft_memalloc(ft_strlen(src) + 1);
	if (!dst)
	{
		return (NULL);
	}
	else
	{
		while (src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (dst);
}

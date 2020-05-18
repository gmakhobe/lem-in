/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmakhobe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 10:56:29 by gmakhobe          #+#    #+#             */
/*   Updated: 2019/06/30 11:08:42 by gmakhobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (i < (int)ft_strlen(s) + 1)
	{
		if (s[i] == (char)c)
			return (((char *)s + i));
		i++;
	}
	return (NULL);
}

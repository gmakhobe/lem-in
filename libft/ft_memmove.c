/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmakhobe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 14:54:32 by gmakhobe          #+#    #+#             */
/*   Updated: 2019/06/12 14:30:10 by gmakhobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dstc;
	unsigned char	*srcc;
	size_t			i;

	dstc = (unsigned char *)dst;
	srcc = (unsigned char *)src;
	i = 0;
	if (srcc == dstc || !len)
		return (dst);
	if (srcc < dstc)
		while (len--)
		{
			dstc[len] = srcc[len];
		}
	else
		while (i < len)
		{
			dstc[i] = srcc[i];
			i++;
		}
	return (dst);
}

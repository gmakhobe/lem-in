/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmakhobe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 13:47:35 by gmakhobe          #+#    #+#             */
/*   Updated: 2019/06/17 15:35:24 by gmakhobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*ptr1;
	char	*ptr2;
	size_t	i;

	ptr1 = (char *)dst;
	ptr2 = (char *)src;
	i = 0;
	if (n == 0 || ptr1 == ptr2)
		return (dst);
	while (i < n)
	{
		*(ptr1 + i) = *(ptr2 + i);
		i++;
	}
	return (dst);
}

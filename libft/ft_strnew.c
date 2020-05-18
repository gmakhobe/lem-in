/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmakhobe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 15:30:19 by gmakhobe          #+#    #+#             */
/*   Updated: 2019/06/17 09:59:47 by gmakhobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *ptr;

	ptr = (char *)malloc(sizeof(char) * size + 1);
	if (!ptr)
	{
		return (NULL);
	}
	ft_bzero(ptr, size + 1);
	return (ptr);
}

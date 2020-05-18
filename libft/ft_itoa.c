/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmakhobe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 10:20:28 by gmakhobe          #+#    #+#             */
/*   Updated: 2019/06/29 13:20:21 by gmakhobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_intlen(int n)
{
	size_t	i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char			*ft_itoa(int n)
{
	char			*str;
	size_t			intlen;
	unsigned int	ncpy;

	intlen = ft_intlen(n);
	ncpy = n;
	if (n < 0)
	{
		ncpy = -n;
		intlen++;
	}
	if (!(str = ft_strnew(intlen)))
		return (NULL);
	str[--intlen] = ncpy % 10 + '0';
	while (ncpy /= 10)
		str[--intlen] = ncpy % 10 + '0';
	if (n < 0)
		*(str + 0) = '-';
	return (str);
}

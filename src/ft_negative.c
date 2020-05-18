/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_negative.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 13:47:23 by samofoke          #+#    #+#             */
/*   Updated: 2020/05/18 13:50:46 by samofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

int		ft_negative(const char *str, size_t n)
{
	unsigned int	nbr;
	int				neg;

	while (ft_space(*str))
		str++;
	if (*str == '-')
	{
		neg = 1;
		str++;
	}
	else
	{
		neg = 0;
		if (*str == '+')
			str++;
	}
	nbr = 0;
	while (ft_isdigit(*str) && n--)
	{
		nbr = nbr * 10 + (*str - '0');
		str++;
	}
	return (neg) ? -(int)nbr : (int)nbr;
}

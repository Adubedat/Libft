/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubedat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 16:10:37 by adubedat          #+#    #+#             */
/*   Updated: 2015/11/24 18:11:51 by adubedat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int result;
	int negative;
	int i;

	i = 0;
	result = 0;
	negative = 0;
	while (str[i] != '-' && str[i] != '+' && !(str[i] >= '0' && str[i] <= '9'))
	{
		if (str[i] >= 33 && str[i] <= 126)
			return (0);
		i++;
	}
	if (str[i] == '-')
		negative = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (negative == 1)
		result = -result;
	return (result);
}

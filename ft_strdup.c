/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubedat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 17:51:12 by adubedat          #+#    #+#             */
/*   Updated: 2015/11/23 18:25:15 by adubedat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	s_size;
	char	*str;
	int		i;

	i = 0;
	s_size = ft_strlen(s);
	str = (char *)malloc(sizeof(*str) * (s_size + 1));
	if (str)
	{
		while (s[i] != '\0')
		{
			str[i] = s[i];
			i++;
		}
		return (str);
	}
	else
		return (NULL);
}
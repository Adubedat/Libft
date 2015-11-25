/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubedat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 21:38:01 by adubedat          #+#    #+#             */
/*   Updated: 2015/11/25 21:50:38 by adubedat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t j;
	size_t i;

	i = 0;
	if (*s2 == '\0')
		return ((char*)s1);
	while (s1[i] && i < n)
	{
		j = 0;
		while (s1[i + j] == s2[j] && s2[j] != '\0' && (i + j) < n)
			j++;
		if (s2[j] == '\0')
			return ((char*)s1);
		if ((i + j) == n)
			return (NULL);
		i++;
	}
	return (NULL);
}

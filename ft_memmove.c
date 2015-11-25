/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubedat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 15:58:16 by adubedat          #+#    #+#             */
/*   Updated: 2015/11/25 16:31:31 by adubedat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	*temp;

	temp = (void*)malloc(sizeof((*temp) * len));
	ft_memcpy(temp, src, len);
	ft_memcpy(dest, temp, len);
	free(temp);
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadouz <oadouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 19:49:13 by zait-hmi          #+#    #+#             */
/*   Updated: 2024/12/10 23:01:26 by oadouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	char		*tempd;
	const char	*temps;
	size_t		i;

	tempd = dest;
	temps = src;
	i = 0;
	if (src == dest)
		return (dest);
	while (i < len)
	{
		tempd[i] = temps[i];
		i++;
	}
	return (dest);
}

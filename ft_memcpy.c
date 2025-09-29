/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cikuntay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 09:05:53 by cikuntay          #+#    #+#             */
/*   Updated: 2025/09/29 09:09:15 by cikuntay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	unsigned char *source;
	size_t	i;

	i = 0;
	d = (unsigned char *)dest;
	source = (unsigned char *)src;
	if (!dest && !src)
		return (dest);
	while (i < n)
	{
		d[i] = source[i];
		i++;
	}
	return (dest);
}


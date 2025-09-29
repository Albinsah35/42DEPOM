/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cikuntay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 09:19:15 by cikuntay          #+#    #+#             */
/*   Updated: 2025/09/29 09:23:33 by cikuntay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *ptr;
	unsigned char chr;
	
	chr = (unsigned char)c;
	ptr = (unsigned char *)s;
	while (n > 0)
	{
		if (*ptr == chr)
			return ((void *)ptr);
		ptr++;
		n--;
	}
	return (NULL);
}

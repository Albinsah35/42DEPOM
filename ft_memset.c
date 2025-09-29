/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cikuntay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 09:01:18 by cikuntay          #+#    #+#             */
/*   Updated: 2025/09/29 09:05:41 by cikuntay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*arr;
	size_t			i;

	i = 0;
	arr = (unsigned char *)s;
	while (i < n)
	{
		arr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

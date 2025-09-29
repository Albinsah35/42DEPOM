/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cikuntay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 12:19:49 by cikuntay          #+#    #+#             */
/*   Updated: 2025/09/29 12:23:15 by cikuntay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	x;

	x = ft_strlen(s);
	if (c == 0)
		return((char *)s + x);
	while (x >= 0)
	{
		if( s[x] == (char)c)
			return ((char *)(s + x));
		x --;
	}
	return (NULL);
}


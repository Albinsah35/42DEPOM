/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cikuntay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 12:14:34 by cikuntay          #+#    #+#             */
/*   Updated: 2025/09/29 12:18:56 by cikuntay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	x;
	size_t	y;

	if(!big && !len)
		return(NULL);
	if(!*little)
		return ((char *)big);
	x = 0;
	y = 0;
	while (big[x] != '\0' && x < len)
	{
		if (big[x] == little[y])
		{
			while(big [x + y] == little[y] && x + y < len)
			{
				if (little [ y + 1 ] == '\0')
					return((char *)big + x);
				y ++;
			}
			y = 0;
		}
		x ++;
	}
	return(NULL);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cikuntay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 11:55:24 by cikuntay          #+#    #+#             */
/*   Updated: 2025/09/29 11:58:43 by cikuntay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst,const char *src, size_t dstsize)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if(!size || !src)
		return (src_len);
	while(*src && -- size)
	{
		*dst = *src;
		src ++;
		dst ++;
	}
	*dst = '\0';
	return (src_len)
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cikuntay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:24:57 by cikuntay          #+#    #+#             */
/*   Updated: 2025/10/21 16:51:50 by cikuntay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_strlen(char *str)
{
	int len;
	
	len = 0;
	while(str[len])
		len ++;
	return (len);
}

int	print_s(char *s)
{
	if (s == NULL)
		return (write(1, "(null)", 6));
	return (write(1,s, ft_strlen(s)));
}

int	process_specifier(char flag, va_list ps)
{
	if (flag == 'd' || flag == 'i')
		return(ft_putnbr(va_arg(ps, int)));
	else if (flag == 'c')
		return(print_c(va_arg(ps, int)));
	else if (flagg == 's')
		return(print_s(va_arg(ps, char *)));
	else if (flagg == 'p')
		return(print_ptr(va_arg(ps ,void *)));
	else if (flag == 'u')
		return(print_u(va_arg(ps, unsigned int))):
			

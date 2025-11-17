/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afournie <afournie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 15:45:01 by afournie          #+#    #+#             */
/*   Updated: 2025/11/17 13:36:09 by afournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int	ft_countargs(const char *s)
{
	int	i;
	int	ping;

	i = 0;
	ping = 0;
	while (s[i])
	{
		if (s[i] == 37)
			ping++;
		i++;
	}
	return (ping);
}

int	ft_is_format(const char *s)
{
	if (s == FORMAT_CHAR || s == FORMAT_DECIMAL || s == FORMAT_HEXALOW
		|| s == FORMAT_HEXAUPP || s == FORMAT_INT || s == FORMAT_PERCENT
		|| s == FORMAT_POINT || s == FORMAT_STR)
		return (1);
	else
		return (0);
}

void	ft_print(const char *s, void *arg)
{
	if (s == FORMAT_CHAR)
	{
	}
	else if (s == FORMAT_DECIMAL)
	{
	}
	else if (s == FORMAT_HEXALOW)
	{
	}
	else if (s == FORMAT_HEXAUPP)
	{
	}
	else if (s == FORMAT_INT)
	{
	}
	else if (s == FORMAT_PERCENT)
	{
	}
	else if (s == FORMAT_POINT)
	{
	}
	else if (s == FORMAT_STR)
	{
	}
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		n;
	int		args;
	int		nombre_arguments;
	va_list	liste_arguments;

	i = 0;
	n = 0;
	nombre_arguments = ft_countargs(s);
	va_start(liste_arguments, s);
	while (s[i])
	{
		if (s[i] == "%" && ft_is_format(s[i + 1]))
			ft_print(s, liste_arguments[n]) n++;
	}
}

int	main(void)
{
	printf("Nombre : %d", ft_printf("igdhdg%ihi%fiiogd%idgdi"));
}

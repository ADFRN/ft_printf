/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afournie <afournie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 15:45:01 by afournie          #+#    #+#             */
/*   Updated: 2025/11/12 16:20:07 by afournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int	ft_args_count(const char *s)
{
	int	args;
	int	i;

	i = 0;
	args = 0;
	while (s[i])
	{
		if (s[i] == 37)
			args++;
		i++;
	}
	return (args);
}

void	ft_print(const char *s, int index)
{
	while (s[index])
	{
		if (s[index] != 37)
			return ;
		ft_putchar_fd(1, s[index]);
		index++;
	}
}

int	ft_printf(const char *s, ...)
{
	int		args_total;
	int		args_count;
	int		aa;
	va_list	args_list;
	va_list	args_copy;

	aa = 0;
	args_count = 0;
	args_total = ft_args_count(s);
	va_start(args_list, s);
	va_copy(args_copy, args_list);
	while (args_count < args_total)
	{
		ft_print(s, aa);
		if (aa)
		{
			printf("je stop ici");
			return (1);
		}
	}
	va_end(args_copy);
	return (0);
}

int	main(void)
{
	ft_printf("Je fait un test avec % des lettres");
}
